# -*- coding: utf-8 -*-
import ConfigParser

old_config = ConfigParser.ConfigParser()
old_config.read('/root/old_config.ini')

new_config = ConfigParser.ConfigParser()
new_config.read('/root/new_config.ini')

for section in new_config.sections():
    if not old_config.has_section(section):
        old_config.add_section(section)
    for option in new_config.options(section):
        if not old_config.has_option(section, option):
            value = new_config.get(section, option)
            old_config.set(section, option, value)

with open('/root/config.mksini', 'w') as f:
    old_config.write(f)

