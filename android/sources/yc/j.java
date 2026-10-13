package yc;

import com.facebook.react.uimanager.events.PointerEventHelper;
import com.reactnativecommunity.clipboard.ClipboardModule;
import fi.e0;
import java.nio.ByteBuffer;
import java.util.UUID;
import ke.w;

/* loaded from: classes3.dex */
public abstract class j {
    public static final String[] a = {"Blues", "Classic Rock", "Country", "Dance", "Disco", "Funk", "Grunge", "Hip-Hop", "Jazz", "Metal", "New Age", "Oldies", "Other", "Pop", "R&B", "Rap", "Reggae", "Rock", "Techno", "Industrial", "Alternative", "Ska", "Death Metal", "Pranks", "Soundtrack", "Euro-Techno", "Ambient", "Trip-Hop", "Vocal", "Jazz+Funk", "Fusion", "Trance", "Classical", "Instrumental", "Acid", "House", "Game", "Sound Clip", "Gospel", "Noise", "AlternRock", "Bass", "Soul", "Punk", "Space", "Meditative", "Instrumental Pop", "Instrumental Rock", "Ethnic", "Gothic", "Darkwave", "Techno-Industrial", "Electronic", "Pop-Folk", "Eurodance", "Dream", "Southern Rock", "Comedy", "Cult", "Gangsta", "Top 40", "Christian Rap", "Pop/Funk", "Jungle", "Native American", "Cabaret", "New Wave", "Psychadelic", "Rave", "Showtunes", "Trailer", "Lo-Fi", "Tribal", "Acid Punk", "Acid Jazz", "Polka", "Retro", "Musical", "Rock & Roll", "Hard Rock", "Folk", "Folk-Rock", "National Folk", "Swing", "Fast Fusion", "Bebob", "Latin", "Revival", "Celtic", "Bluegrass", "Avantgarde", "Gothic Rock", "Progressive Rock", "Psychedelic Rock", "Symphonic Rock", "Slow Rock", "Big Band", "Chorus", "Easy Listening", "Acoustic", "Humour", "Speech", "Chanson", "Opera", "Chamber Music", "Sonata", "Symphony", "Booty Bass", "Primus", "Porn Groove", "Satire", "Slow Jam", "Club", "Tango", "Samba", "Folklore", "Ballad", "Power Ballad", "Rhythmic Soul", "Freestyle", "Duet", "Punk Rock", "Drum Solo", "A capella", "Euro-House", "Dance Hall", "Goa", "Drum & Bass", "Club-House", "Hardcore", "Terror", "Indie", "BritPop", "Afro-Punk", "Polsk Punk", "Beat", "Christian Gangsta Rap", "Heavy Metal", "Black Metal", "Crossover", "Contemporary Christian", "Christian Rock", "Merengue", "Salsa", "Thrash Metal", "Anime", "Jpop", "Synthpop", "Abstract", "Art Rock", "Baroque", "Bhangra", "Big beat", "Breakbeat", "Chillout", "Downtempo", "Dub", "EBM", "Eclectic", "Electro", "Electroclash", "Emo", "Experimental", "Garage", "Global", "IDM", "Illbient", "Industro-Goth", "Jam Band", "Krautrock", "Leftfield", "Lounge", "Math Rock", "New Romantic", "Nu-Breakz", "Post-Punk", "Post-Rock", "Psytrance", "Shoegaze", "Space Rock", "Trop Rock", "World Music", "Neoclassical", "Audiobook", "Audio theatre", "Neue Deutsche Welle", "Podcast", "Indie-Rock", "G-Funk", "Dubstep", "Garage Rock", "Psybient"};

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f20808b = {1769172845, 1769172786, 1769172787, 1769172788, 1769172789, 1769172790, 1769172793, 1635148593, 1752589105, 1751479857, 1635135537, 1836069937, 1836069938, 862401121, 862401122, 862417462, 862417718, 862414134, 862414646, 1295275552, 1295270176, 1714714144, 1801741417, 1295275600, 1903435808, 1297305174, 1684175153, 1769172332, 1885955686};

    public static byte[] a(UUID uuid, UUID[] uuidArr, byte[] bArr) {
        int length = (bArr != null ? bArr.length : 0) + 32;
        if (uuidArr != null) {
            length += (uuidArr.length * 16) + 4;
        }
        ByteBuffer allocate = ByteBuffer.allocate(length);
        allocate.putInt(length);
        allocate.putInt(1886614376);
        allocate.putInt(uuidArr != null ? PointerEventHelper.X_FLAG_SUPPORTS_HOVER : 0);
        allocate.putLong(uuid.getMostSignificantBits());
        allocate.putLong(uuid.getLeastSignificantBits());
        if (uuidArr != null) {
            allocate.putInt(uuidArr.length);
            for (UUID uuid2 : uuidArr) {
                allocate.putLong(uuid2.getMostSignificantBits());
                allocate.putLong(uuid2.getLeastSignificantBits());
            }
        }
        if (bArr != null && bArr.length != 0) {
            allocate.putInt(bArr.length);
            allocate.put(bArr);
        }
        return allocate.array();
    }

    public static id.e b(int i5, w wVar) {
        int g6 = wVar.g();
        if (wVar.g() == 1684108385) {
            wVar.G(8);
            String q5 = wVar.q(g6 - 16);
            return new id.e("und", q5, q5);
        }
        ke.b.N("MetadataUtil", "Failed to parse comment attribute: " + mc.a.b(i5));
        return null;
    }

    public static id.a c(w wVar) {
        int g6 = wVar.g();
        if (wVar.g() != 1684108385) {
            ke.b.N("MetadataUtil", "Failed to parse cover art attribute");
            return null;
        }
        int g10 = wVar.g() & 16777215;
        String str = g10 == 13 ? ClipboardModule.MIMETYPE_JPEG : g10 == 14 ? ClipboardModule.MIMETYPE_PNG : null;
        if (str == null) {
            com.discord.chat.bridge.botuikit.a.q(g10, "Unrecognized cover art flags: ", "MetadataUtil");
            return null;
        }
        wVar.G(4);
        int i5 = g6 - 16;
        byte[] bArr = new byte[i5];
        wVar.e(bArr, 0, i5);
        return new id.a(str, null, 3, bArr);
    }

    public static id.n d(int i5, String str, w wVar) {
        int g6 = wVar.g();
        if (wVar.g() == 1684108385 && g6 >= 22) {
            wVar.G(10);
            int z5 = wVar.z();
            if (z5 > 0) {
                String i6 = k0.d.i(z5, "");
                int z6 = wVar.z();
                if (z6 > 0) {
                    i6 = i6 + "/" + z6;
                }
                return new id.n(str, null, e0.s(i6));
            }
        }
        ke.b.N("MetadataUtil", "Failed to parse index/count attribute: " + mc.a.b(i5));
        return null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v1, types: [byte[], java.io.Serializable] */
    public static a1.d e(byte[] bArr) {
        w wVar = new w(bArr);
        if (wVar.f13364c >= 32) {
            wVar.F(0);
            if (wVar.g() == wVar.a() + 4 && wVar.g() == 1886614376) {
                int e9 = mc.a.e(wVar.g());
                if (e9 > 1) {
                    com.discord.chat.bridge.botuikit.a.q(e9, "Unsupported pssh version: ", "PsshAtomUtil");
                    return null;
                }
                UUID uuid = new UUID(wVar.o(), wVar.o());
                if (e9 == 1) {
                    wVar.G(wVar.x() * 16);
                }
                int x5 = wVar.x();
                if (x5 == wVar.a()) {
                    ?? r22 = new byte[x5];
                    wVar.e(r22, 0, x5);
                    return new a1.d(uuid, e9, r22, 15);
                }
            }
        }
        return null;
    }

    public static byte[] f(byte[] bArr, UUID uuid) {
        a1.d e9 = e(bArr);
        if (e9 == null) {
            return null;
        }
        UUID uuid2 = (UUID) e9.f15i;
        if (uuid.equals(uuid2)) {
            return (byte[]) e9.f16v;
        }
        ke.b.N("PsshAtomUtil", "UUID mismatch. Expected: " + uuid + ", got: " + uuid2 + ".");
        return null;
    }

    public static id.n g(int i5, String str, w wVar) {
        int g6 = wVar.g();
        if (wVar.g() == 1684108385) {
            wVar.G(8);
            return new id.n(str, null, e0.s(wVar.q(g6 - 16)));
        }
        ke.b.N("MetadataUtil", "Failed to parse text attribute: " + mc.a.b(i5));
        return null;
    }

    public static id.j h(int i5, String str, w wVar, boolean z5, boolean z6) {
        int i6 = i(wVar);
        if (z6) {
            i6 = Math.min(1, i6);
        }
        if (i6 >= 0) {
            return z5 ? new id.n(str, null, e0.s(Integer.toString(i6))) : new id.e("und", str, Integer.toString(i6));
        }
        ke.b.N("MetadataUtil", "Failed to parse uint8 attribute: " + mc.a.b(i5));
        return null;
    }

    public static int i(w wVar) {
        wVar.G(4);
        if (wVar.g() == 1684108385) {
            wVar.G(8);
            return wVar.u();
        }
        ke.b.N("MetadataUtil", "Failed to parse uint8 attribute value");
        return -1;
    }

    public static boolean j(qc.k kVar, boolean z5, boolean z6) {
        boolean z7;
        int i5;
        int i6;
        long length = kVar.getLength();
        long j = -1;
        int i10 = (length > (-1L) ? 1 : (length == (-1L) ? 0 : -1));
        long j5 = 4096;
        if (i10 != 0 && length <= 4096) {
            j5 = length;
        }
        int i11 = (int) j5;
        w wVar = new w(64);
        int i12 = 0;
        int i13 = 0;
        boolean z8 = false;
        while (i13 < i11) {
            wVar.C(8);
            if (!kVar.j(wVar.a, i12, 8, true)) {
                break;
            }
            long v5 = wVar.v();
            int g6 = wVar.g();
            if (v5 == 1) {
                kVar.C(wVar.a, 8, 8);
                wVar.E(16);
                i5 = i13;
                i6 = 16;
                v5 = wVar.o();
            } else {
                if (v5 == 0) {
                    long length2 = kVar.getLength();
                    if (length2 != j) {
                        v5 = (length2 - kVar.k()) + 8;
                    }
                }
                i5 = i13;
                i6 = 8;
            }
            long j7 = i6;
            if (v5 < j7) {
                return false;
            }
            int i14 = i5 + i6;
            if (g6 == 1836019574) {
                i11 += (int) v5;
                if (i10 != 0 && i11 > length) {
                    i11 = (int) length;
                }
                i13 = i14;
            } else {
                if (g6 == 1836019558 || g6 == 1836475768) {
                    z7 = true;
                    break;
                }
                int i15 = i10;
                if ((i14 + v5) - j7 >= i11) {
                    break;
                }
                int i16 = (int) (v5 - j7);
                i13 = i14 + i16;
                if (g6 == 1718909296) {
                    if (i16 < 8) {
                        return false;
                    }
                    wVar.C(i16);
                    kVar.C(wVar.a, 0, i16);
                    int i17 = i16 / 4;
                    for (int i18 = 0; i18 < i17; i18++) {
                        if (i18 != 1) {
                            int g10 = wVar.g();
                            if ((g10 >>> 8) != 3368816 && (g10 != 1751476579 || !z6)) {
                                for (int i19 = 0; i19 < 29; i19++) {
                                    if (f20808b[i19] != g10) {
                                    }
                                }
                            }
                            z8 = true;
                            break;
                        }
                        wVar.G(4);
                    }
                    if (!z8) {
                        return false;
                    }
                } else if (i16 != 0) {
                    kVar.l(i16);
                }
                i10 = i15;
            }
            j = -1;
            i12 = 0;
        }
        z7 = false;
        return z8 && z5 == z7;
    }
}
