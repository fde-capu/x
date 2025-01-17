////
//// genome filename:
//// [new] used to follow parameters.
//// without [new] includes genome.
////

genome [new] filename


//// ||
//// auto option
//// if set, will overide parameters with
//// default initials.
////

// gnm auto


////
//// genome parameters:
////

gnm_bias	n
gnm_input	n
gnm_hidden	n
gnm_output	name
			operation // default: op_spark
			? [initial threshold]
			? [mandatory]
gnm_axon	n

########################
## save file .x
## version
## sizeof(GNM)
## binary(?) g_genome

////
//// output sequence list
////

output name
output code



////
out:
	announce
	refuse
	ask
	force

////
out:
	joy (+ in: self-joy)
	pain (+ in: self-pain)
	may have variable threshold in brains
