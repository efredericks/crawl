/**
 * @file
 * @brief Monster abilities.
**/

#ifndef MONABIL_H
#define MONABIL_H

#define TORPOR_SLOWED_KEY "torpor_slowed"

class monster;
struct bolt;

bool mon_special_ability(monster* mons, bolt & beem);
void mon_nearby_ability(monster* mons);

void draconian_change_colour(monster* drac);

bool ugly_thing_mutate(monster* ugly, bool proximity = false);
bool slime_creature_polymorph(monster* slime);

void ballisto_on_move(monster* mons, const coord_def& pos);
void activate_ballistomycetes(monster* mons, const coord_def& origin,
                              bool player_kill);

bool valid_kraken_connection(const monster* mons);
void move_child_tentacles(monster * kraken);
void move_solo_tentacle(monster * tentacle);

void ancient_zyme_sicken(monster* mons);
void torpor_snail_slow(monster* mons);
void starcursed_merge(monster* mon, bool forced);

void heal_flayed_effect(actor* act, bool quiet = false, bool blood_only = false);
void end_flayed_effect(monster* ghost);

bool lost_soul_revive(monster* mons);

void treant_release_fauna(monster* mons);
bool apply_grasping_roots(monster* mons);
void check_grasping_roots(actor* act, bool quiet = false);

void merfolk_avatar_song(monster* mons);
void shock_serpent_discharge(monster* serpent, coord_def pos, int pow,
                             mon_attitude_type attitude);

void guardian_golem_bond(monster* mons);

#endif
