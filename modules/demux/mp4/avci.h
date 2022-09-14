/*****************************************************************************
 * avci.h : AVC Intra SPS/PPS tables
 *****************************************************************************
 * Copyright (C) 2015 VLC authors and VideoLAN
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
#ifndef MP4_AVCI_H
# define MP4_AVCI_H

/* AVCi Tables derived from ffmpeg ff_generate_AVCi_extradata */
static const uint8_t AVCi_HIGH_422_1080p_sps[] = {
    0x7a, 0x10, 0x29, 0xb6, 0xd4, 0x20, 0x22, 0x33,
    0x19, 0xc6, 0x63, 0x23, 0x21, 0x01, 0x11, 0x98,
    0xce, 0x33, 0x19, 0x18, 0x21, 0x02, 0x56, 0xb9,
    0x3d, 0x7d, 0x7e, 0x4f, 0xe3, 0x3f, 0x11, 0xf1,
    0x9e, 0x08, 0xb8, 0x8c, 0x54, 0x43, 0xc0, 0x78,
    0x02, 0x27, 0xe2, 0x70, 0x1e, 0x30, 0x10, 0x10,
    0x14, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00,
    0x03, 0x00, 0xca, 0x10
};

static const uint8_t AVCi_HIGH_422_1080i_sps[] = {
    0x7a, 0x10, 0x29, 0xb6, 0xd4, 0x20, 0x22, 0x33,
    0x19, 0xc6, 0x63, 0x23, 0x21, 0x01, 0x11, 0x98,
    0xce, 0x33, 0x19, 0x18, 0x21, 0x03, 0x3a, 0x46,
    0x65, 0x6a, 0x65, 0x24, 0xad, 0xe9, 0x12, 0x32,
    0x14, 0x1a, 0x26, 0x34, 0xad, 0xa4, 0x41, 0x82,
    0x23, 0x01, 0x50, 0x2b, 0x1a, 0x24, 0x69, 0x48,
    0x30, 0x40, 0x2e, 0x11, 0x12, 0x08, 0xc6, 0x8c,
    0x04, 0x41, 0x28, 0x4c, 0x34, 0xf0, 0x1e, 0x01,
    0x13, 0xf2, 0xe0, 0x3c, 0x60, 0x20, 0x20, 0x28,
    0x00, 0x00, 0x03, 0x00, 0x08, 0x00, 0x00, 0x03,
    0x01, 0x94, 0x20
};

static const uint8_t AVCi_HIGH_422_720p_sps[] = {
    0x7a, 0x10, 0x29, 0xb6, 0xd4, 0x20, 0x2a, 0x33,
    0x1d, 0xc7, 0x62, 0xa1, 0x08, 0x40, 0x54, 0x66,
    0x3b, 0x8e, 0xc5, 0x42, 0x02, 0x10, 0x25, 0x64,
    0x2c, 0x89, 0xe8, 0x85, 0xe4, 0x21, 0x4b, 0x90,
    0x83, 0x06, 0x95, 0xd1, 0x06, 0x46, 0x97, 0x20,
    0xc8, 0xd7, 0x43, 0x08, 0x11, 0xc2, 0x1e, 0x4c,
    0x91, 0x0f, 0x01, 0x40, 0x16, 0xec, 0x07, 0x8c,
    0x04, 0x04, 0x05, 0x00, 0x00, 0x03, 0x00, 0x01,
    0x00, 0x00, 0x03, 0x00, 0x64, 0x84
};

static const uint8_t AVCi_HIGH_10_1080p_sps[] = {
    0x6e, 0x10, 0x28, 0xa6, 0xd4, 0x20, 0x32, 0x33,
    0x0c, 0x71, 0x18, 0x88, 0x62, 0x10, 0x19, 0x19,
    0x86, 0x38, 0x8c, 0x44, 0x30, 0x21, 0x02, 0x56,
    0x4e, 0x6f, 0x37, 0xcd, 0xf9, 0xbf, 0x81, 0x6b,
    0xf3, 0x7c, 0xde, 0x6e, 0x6c, 0xd3, 0x3c, 0x05,
    0xa0, 0x22, 0x7e, 0x5f, 0xfc, 0x00, 0x0c, 0x00,
    0x13, 0x8c, 0x04, 0x04, 0x05, 0x00, 0x00, 0x03,
    0x00, 0x01, 0x00, 0x00, 0x03, 0x00, 0x32, 0x84,
};

static const uint8_t AVCi_HIGH_10_1080i_sps[] = {
    0x6e, 0x10, 0x28, 0xa6, 0xd4, 0x20, 0x32, 0x33,
    0x0c, 0x71, 0x18, 0x88, 0x62, 0x10, 0x19, 0x19,
    0x86, 0x38, 0x8c, 0x44, 0x30, 0x21, 0x02, 0x56,
    0x4e, 0x6e, 0x61, 0x87, 0x3e, 0x73, 0x4d, 0x98,
    0x0c, 0x03, 0x06, 0x9c, 0x0b, 0x73, 0xe6, 0xc0,
    0xb5, 0x18, 0x63, 0x0d, 0x39, 0xe0, 0x5b, 0x02,
    0xd4, 0xc6, 0x19, 0x1a, 0x79, 0x8c, 0x32, 0x34,
    0x24, 0xf0, 0x16, 0x81, 0x13, 0xf7, 0xff, 0x80,
    0x02, 0x00, 0x01, 0xf1, 0x80, 0x80, 0x80, 0xa0,
    0x00, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, 0x06,
    0x50, 0x80
};

static const uint8_t AVCi_HIGH_10_720p_sps[] = {
    0x6e, 0x10, 0x20, 0xa6, 0xd4, 0x20, 0x32, 0x33,
    0x0c, 0x71, 0x18, 0x88, 0x62, 0x10, 0x19, 0x19,
    0x86, 0x38, 0x8c, 0x44, 0x30, 0x21, 0x02, 0x56,
    0x4e, 0x6f, 0x37, 0xcd, 0xf9, 0xbf, 0x81, 0x6b,
    0xf3, 0x7c, 0xde, 0x6e, 0x6c, 0xd3, 0x3c, 0x0f,
    0x01, 0x6e, 0xff, 0xc0, 0x00, 0xc0, 0x01, 0x38,
    0xc0, 0x40, 0x40, 0x50, 0x00, 0x00, 0x03, 0x00,
    0x10, 0x00, 0x00, 0x06, 0x48, 0x40
};

static const uint8_t AVCi_HIGH_422_1080x_pps[] = {
    0xce, 0x33, 0x48, 0xd0
};

static const uint8_t AVCi_HIGH_422_720p_pps[] = {
    0xce, 0x31, 0x12, 0x11
};

static const uint8_t AVCi_HIGH_10_pps[] = {
    0xee, 0x31, 0x12, 0x11
};


#define AVCI_ENTRY(a,b, A, B) {b, A, B, sizeof(A), sizeof(B), a}
#define AVCI_ENTRIES 6

static const struct
{
    bool b_interlace;
    const uint8_t *p_sps;
    const uint8_t *p_pps;
    uint8_t  i_sps;
    uint8_t  i_pps;
    uint16_t i_res;
} AVCi_lookup_table[AVCI_ENTRIES] = {
    AVCI_ENTRY(1920, true,  AVCi_HIGH_422_1080i_sps, AVCi_HIGH_422_1080x_pps),
    AVCI_ENTRY(1920, false, AVCi_HIGH_422_1080p_sps, AVCi_HIGH_422_1080x_pps),
    AVCI_ENTRY(1280, false, AVCi_HIGH_422_720p_sps,  AVCi_HIGH_422_720p_pps),
    AVCI_ENTRY(1440, true,  AVCi_HIGH_10_1080i_sps,  AVCi_HIGH_10_pps),
    AVCI_ENTRY(1440, false, AVCi_HIGH_10_1080p_sps,  AVCi_HIGH_10_pps),
    AVCI_ENTRY(960,  false, AVCi_HIGH_10_720p_sps,   AVCi_HIGH_10_pps),
};

static inline bool AVCi_lookup(uint16_t i_res, bool b_i,
                               const uint8_t **pp_sps, uint8_t *pi_sps,
                               const uint8_t **pp_pps, uint8_t *pi_pps)
{
    for(int i=0; i<AVCI_ENTRIES; i++)
    {
        if(AVCi_lookup_table[i].b_interlace == b_i && AVCi_lookup_table[i].i_res == i_res)
        {
            *pp_sps = AVCi_lookup_table[i].p_sps;
            *pi_sps = AVCi_lookup_table[i].i_sps;
            *pp_pps = AVCi_lookup_table[i].p_pps;
            *pi_pps = AVCi_lookup_table[i].i_pps;
            return true;
        }
    }
    return false;
}

#undef AVCI_ENTRY
#undef AVCI_ENTRIES

#if 0
static uint8_t * AVCi_create_avcC( uint16_t i_res, bool b_interlaced, int *pi_avcC )
{
    const uint8_t *p_pps, *p_sps;
    uint8_t i_sps, i_pps;
    uint8_t *p_data = NULL;
    if( AVCi_lookup( i_res, b_interlaced,
                     &p_sps, &i_sps, &p_pps, &i_pps ) )
    {
        int i_size = 5 + i_pps + i_sps + 2 + 2 * 3;
        if( (p_data = (uint8_t *) malloc(i_size)) )
        {
            *pi_avcC = i_size;
            /* Merge everything into avc decoder config record s4,1s,1p */
            p_data[0] = 0x01;
            memcpy(&p_data[1], p_sps, 3);
            p_data[4] = 0xff;
            p_data[5] = 0xe1; /* 1 sps */
            p_data[6] = 0x00; p_data[7] = i_sps + 1; /* sps NAL size */
            p_data[8] = 0x67; /* SPS_NAL Header */
            memcpy(&p_data[9], p_sps, i_sps);
            p_data[9 + i_sps] = 0x01; /* 1 sps */
            p_data[10 + i_sps] = 0x00; p_data[11 + i_sps] = i_pps + 1; /* pps NAL size */
            p_data[12 + i_sps] = 0x68; /* PPS_NAL Header */
            memcpy(&p_data[13 + i_sps], p_pps, i_pps);
        }
    }
    return p_data;
}
#endif

static uint8_t * AVCi_create_AnnexB( uint16_t i_res, bool b_interlaced, int *pi_avcC )
{
    const uint8_t *p_pps, *p_sps;
    uint8_t i_sps, i_pps;
    uint8_t *p_data = NULL;
    const uint8_t rgi_startcode[] = {0,0,0,1};
    if( AVCi_lookup( i_res, b_interlaced,
                     &p_sps, &i_sps, &p_pps, &i_pps ) )
    {
        int i_size = i_pps + i_sps + 2 * 5;
        if( (p_data = (uint8_t *) malloc(i_size)) )
        {
            *pi_avcC = i_size;
            memcpy(p_data, rgi_startcode, 4);
            p_data[4] = 0x67; /* SPS_NAL Header */
            memcpy(&p_data[5], p_sps, i_sps);
            memcpy(&p_data[5 + i_sps], rgi_startcode, 4);
            p_data[9 + i_sps] = 0x68; /* PPS_NAL Header */
            memcpy(&p_data[10 + i_sps], p_pps, i_pps);
        }
    }
    return p_data;
}

#endif