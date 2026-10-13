package xd;

import a4.i;
import androidx.recyclerview.widget.h0;
import com.discord.chat.presentation.message.view.MediaImageViewKt;
import com.discord.media.engine.MediaEngine;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.imageutils.JfifUtil;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import ke.w;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class c extends h {

    /* renamed from: h, reason: collision with root package name */
    public final int f20345h;

    /* renamed from: i, reason: collision with root package name */
    public final int f20346i;
    public final int j;

    /* renamed from: n, reason: collision with root package name */
    public List f20349n;

    /* renamed from: o, reason: collision with root package name */
    public List f20350o;

    /* renamed from: p, reason: collision with root package name */
    public int f20351p;

    /* renamed from: q, reason: collision with root package name */
    public int f20352q;

    /* renamed from: r, reason: collision with root package name */
    public boolean f20353r;

    /* renamed from: s, reason: collision with root package name */
    public boolean f20354s;

    /* renamed from: t, reason: collision with root package name */
    public byte f20355t;

    /* renamed from: u, reason: collision with root package name */
    public byte f20356u;

    /* renamed from: w, reason: collision with root package name */
    public boolean f20358w;

    /* renamed from: x, reason: collision with root package name */
    public long f20359x;

    /* renamed from: y, reason: collision with root package name */
    public static final int[] f20342y = {11, 1, 3, 12, 14, 5, 7, 9};

    /* renamed from: z, reason: collision with root package name */
    public static final int[] f20343z = {0, 4, 8, 12, 16, 20, 24, 28};
    public static final int[] A = {-1, -16711936, -16776961, -16711681, -65536, -256, -65281};
    public static final int[] B = {32, 33, 34, 35, 36, 37, 38, 39, 40, 41, JfifUtil.MARKER_APP1, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 233, 93, 237, 243, h0.DEFAULT_SWIPE_ANIMATION_DURATION, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 115, 116, 117, 118, 119, 120, 121, 122, 231, 247, 209, 241, 9632};
    public static final int[] C = {174, 176, 189, 191, 8482, 162, 163, 9834, 224, 32, 232, 226, 234, 238, 244, 251};
    public static final int[] D = {193, 201, 211, JfifUtil.MARKER_SOS, 220, 252, 8216, 161, 42, 39, 8212, 169, 8480, 8226, 8220, 8221, JfifUtil.MARKER_SOFn, 194, 199, h0.DEFAULT_DRAG_ANIMATION_DURATION, 202, 203, 235, 206, 207, 239, MediaImageViewKt.OBSCURED_IMAGE_MIN_HEIGHT, JfifUtil.MARKER_EOI, 249, 219, 171, 187};
    public static final int[] E = {195, 227, 205, 204, 236, 210, 242, 213, 245, 123, 125, 92, 94, 95, 124, 126, 196, 228, 214, 246, 223, 165, 164, 9474, 197, 229, JfifUtil.MARKER_SOI, 248, 9484, 9488, 9492, 9496};
    public static final boolean[] F = {false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false, false, true, true, false, true, false, false, true, false, true, true, false, true, false, false, true, true, false, false, true, false, true, true, false};

    /* renamed from: g, reason: collision with root package name */
    public final w f20344g = new w();

    /* renamed from: l, reason: collision with root package name */
    public final ArrayList f20347l = new ArrayList();

    /* renamed from: m, reason: collision with root package name */
    public b f20348m = new b(0, 4);

    /* renamed from: v, reason: collision with root package name */
    public int f20357v = 0;
    public final long k = 16000000;

    public c(String str, int i5) {
        this.f20345h = "application/x-mp4-cea-608".equals(str) ? 2 : 3;
        if (i5 == 1) {
            this.j = 0;
            this.f20346i = 0;
        } else if (i5 == 2) {
            this.j = 1;
            this.f20346i = 0;
        } else if (i5 == 3) {
            this.j = 0;
            this.f20346i = 1;
        } else if (i5 != 4) {
            ke.b.N("Cea608Decoder", "Invalid channel. Defaulting to CC1.");
            this.j = 0;
            this.f20346i = 0;
        } else {
            this.j = 1;
            this.f20346i = 1;
        }
        k(0);
        j();
        this.f20358w = true;
        this.f20359x = -9223372036854775807L;
    }

    @Override // xd.h
    public final i e() {
        List list = this.f20349n;
        this.f20350o = list;
        list.getClass();
        return new i(list);
    }

    /* JADX WARN: Removed duplicated region for block: B:160:0x007e A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x0085 A[SYNTHETIC] */
    @Override // xd.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void f(g gVar) {
        boolean z5;
        ByteBuffer byteBuffer = gVar.f14436v;
        byteBuffer.getClass();
        byte[] array = byteBuffer.array();
        int limit = byteBuffer.limit();
        w wVar = this.f20344g;
        wVar.D(array, limit);
        boolean z6 = false;
        while (true) {
            int a = wVar.a();
            int i5 = this.f20345h;
            if (a < i5) {
                if (z6) {
                    int i6 = this.f20351p;
                    if (i6 == 1 || i6 == 3) {
                        this.f20349n = i();
                        this.f20359x = this.f20396e;
                        return;
                    }
                    return;
                }
                return;
            }
            int u5 = i5 == 2 ? -4 : wVar.u();
            int u6 = wVar.u();
            int u10 = wVar.u();
            if ((u5 & 2) == 0 && (u5 & 1) == this.f20346i) {
                byte b10 = (byte) (u6 & 127);
                byte b11 = (byte) (u10 & 127);
                if (b10 != 0 || b11 != 0) {
                    boolean z7 = this.f20353r;
                    if ((u5 & 4) == 4) {
                        boolean[] zArr = F;
                        if (zArr[u6] && zArr[u10]) {
                            z5 = true;
                            this.f20353r = z5;
                            if (z5 || (b10 & 240) != 16) {
                                this.f20354s = false;
                            } else if (this.f20354s && this.f20355t == b10 && this.f20356u == b11) {
                                this.f20354s = false;
                            } else {
                                this.f20354s = true;
                                this.f20355t = b10;
                                this.f20356u = b11;
                            }
                            if (!z5) {
                                if (1 <= b10 && b10 <= 15) {
                                    this.f20358w = false;
                                } else if ((b10 & 246) == 20) {
                                    if (b11 != 32 && b11 != 47) {
                                        switch (b11) {
                                            default:
                                                switch (b11) {
                                                    case 42:
                                                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                                                        this.f20358w = false;
                                                        break;
                                                }
                                            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                                            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                                                this.f20358w = true;
                                                break;
                                        }
                                    }
                                    this.f20358w = true;
                                }
                                if (this.f20358w) {
                                    int i10 = b10 & 224;
                                    if (i10 == 0) {
                                        this.f20357v = (b10 >> 3) & 1;
                                    }
                                    if (this.f20357v == this.j) {
                                        if (i10 == 0) {
                                            int i11 = b10 & 247;
                                            if (i11 == 17 && (b11 & 240) == 48) {
                                                this.f20348m.a((char) C[b11 & 15]);
                                            } else {
                                                int i12 = b10 & 246;
                                                if (i12 == 18 && (b11 & 224) == 32) {
                                                    this.f20348m.b();
                                                    this.f20348m.a((char) ((b10 & 1) == 0 ? D[b11 & 31] : E[b11 & 31]));
                                                } else if (i11 == 17 && (b11 & 240) == 32) {
                                                    this.f20348m.a(' ');
                                                    boolean z8 = (b11 & 1) == 1;
                                                    b bVar = this.f20348m;
                                                    bVar.a.add(new a((b11 >> 1) & 7, bVar.f20336c.length(), z8));
                                                } else if ((b10 & 240) == 16 && (b11 & 192) == 64) {
                                                    int i13 = f20342y[b10 & 7];
                                                    if ((b11 & 32) != 0) {
                                                        i13++;
                                                    }
                                                    b bVar2 = this.f20348m;
                                                    if (i13 != bVar2.f20337d) {
                                                        if (this.f20351p != 1 && !bVar2.e()) {
                                                            b bVar3 = new b(this.f20351p, this.f20352q);
                                                            this.f20348m = bVar3;
                                                            this.f20347l.add(bVar3);
                                                        }
                                                        this.f20348m.f20337d = i13;
                                                    }
                                                    boolean z10 = (b11 & 16) == 16;
                                                    boolean z11 = (b11 & 1) == 1;
                                                    int i14 = (b11 >> 1) & 7;
                                                    b bVar4 = this.f20348m;
                                                    bVar4.a.add(new a(z10 ? 8 : i14, bVar4.f20336c.length(), z11));
                                                    if (z10) {
                                                        this.f20348m.f20338e = f20343z[i14];
                                                    }
                                                } else if (i11 == 23 && b11 >= 33 && b11 <= 35) {
                                                    this.f20348m.f20339f = b11 - 32;
                                                } else if (i12 == 20 && (b11 & 240) == 32) {
                                                    if (b11 == 32) {
                                                        k(2);
                                                    } else if (b11 != 41) {
                                                        switch (b11) {
                                                            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                                                k(1);
                                                                this.f20352q = 2;
                                                                this.f20348m.f20341h = 2;
                                                                break;
                                                            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                                                                k(1);
                                                                this.f20352q = 3;
                                                                this.f20348m.f20341h = 3;
                                                                break;
                                                            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                                                                k(1);
                                                                this.f20352q = 4;
                                                                this.f20348m.f20341h = 4;
                                                                break;
                                                            default:
                                                                int i15 = this.f20351p;
                                                                if (i15 != 0) {
                                                                    if (b11 == 33) {
                                                                        this.f20348m.b();
                                                                        break;
                                                                    } else {
                                                                        switch (b11) {
                                                                            case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                                                                                this.f20349n = Collections.EMPTY_LIST;
                                                                                if (i15 == 1 || i15 == 3) {
                                                                                    j();
                                                                                    break;
                                                                                }
                                                                            case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                                                                                if (i15 == 1 && !this.f20348m.e()) {
                                                                                    b bVar5 = this.f20348m;
                                                                                    ArrayList arrayList = bVar5.f20335b;
                                                                                    arrayList.add(bVar5.d());
                                                                                    bVar5.f20336c.setLength(0);
                                                                                    bVar5.a.clear();
                                                                                    int min = Math.min(bVar5.f20341h, bVar5.f20337d);
                                                                                    while (arrayList.size() >= min) {
                                                                                        arrayList.remove(0);
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                break;
                                                                            case 46:
                                                                                j();
                                                                                break;
                                                                            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                                                                                this.f20349n = i();
                                                                                j();
                                                                                break;
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                        }
                                                    } else {
                                                        k(3);
                                                    }
                                                }
                                            }
                                        } else {
                                            b bVar6 = this.f20348m;
                                            int i16 = (b10 & ByteCompanionObject.MAX_VALUE) - 32;
                                            int[] iArr = B;
                                            bVar6.a((char) iArr[i16]);
                                            if ((b11 & 224) != 0) {
                                                this.f20348m.a((char) iArr[(b11 & ByteCompanionObject.MAX_VALUE) - 32]);
                                            }
                                        }
                                        z6 = true;
                                    }
                                }
                            } else if (z7) {
                                j();
                                z6 = true;
                            }
                        }
                    }
                    z5 = false;
                    this.f20353r = z5;
                    if (z5) {
                    }
                    this.f20354s = false;
                    if (!z5) {
                    }
                }
            }
        }
    }

    @Override // xd.h, mc.d
    public final void flush() {
        super.flush();
        this.f20349n = null;
        this.f20350o = null;
        k(0);
        this.f20352q = 4;
        this.f20348m.f20341h = 4;
        j();
        this.f20353r = false;
        this.f20354s = false;
        this.f20355t = (byte) 0;
        this.f20356u = (byte) 0;
        this.f20357v = 0;
        this.f20358w = true;
        this.f20359x = -9223372036854775807L;
    }

    @Override // xd.h, mc.d
    /* renamed from: g */
    public final wd.c b() {
        wd.c cVar;
        wd.c b10 = super.b();
        if (b10 != null) {
            return b10;
        }
        long j = this.k;
        if (j == -9223372036854775807L) {
            return null;
        }
        long j5 = this.f20359x;
        if (j5 == -9223372036854775807L || this.f20396e - j5 < j || (cVar = (wd.c) this.f20393b.pollFirst()) == null) {
            return null;
        }
        this.f20349n = Collections.EMPTY_LIST;
        this.f20359x = -9223372036854775807L;
        cVar.g(this.f20396e, e(), LongCompanionObject.MAX_VALUE);
        return cVar;
    }

    @Override // xd.h
    public final boolean h() {
        return this.f20349n != this.f20350o;
    }

    public final ArrayList i() {
        ArrayList arrayList = this.f20347l;
        int size = arrayList.size();
        ArrayList arrayList2 = new ArrayList(size);
        int i5 = 2;
        for (int i6 = 0; i6 < size; i6++) {
            wd.b c6 = ((b) arrayList.get(i6)).c(Integer.MIN_VALUE);
            arrayList2.add(c6);
            if (c6 != null) {
                i5 = Math.min(i5, c6.F);
            }
        }
        ArrayList arrayList3 = new ArrayList(size);
        for (int i10 = 0; i10 < size; i10++) {
            wd.b bVar = (wd.b) arrayList2.get(i10);
            if (bVar != null) {
                if (bVar.F != i5) {
                    bVar = ((b) arrayList.get(i10)).c(i5);
                    bVar.getClass();
                }
                arrayList3.add(bVar);
            }
        }
        return arrayList3;
    }

    public final void j() {
        b bVar = this.f20348m;
        bVar.f20340g = this.f20351p;
        bVar.a.clear();
        bVar.f20335b.clear();
        bVar.f20336c.setLength(0);
        bVar.f20337d = 15;
        bVar.f20338e = 0;
        bVar.f20339f = 0;
        ArrayList arrayList = this.f20347l;
        arrayList.clear();
        arrayList.add(this.f20348m);
    }

    public final void k(int i5) {
        int i6 = this.f20351p;
        if (i6 == i5) {
            return;
        }
        this.f20351p = i5;
        if (i5 != 3) {
            j();
            if (i6 == 3 || i5 == 1 || i5 == 0) {
                this.f20349n = Collections.EMPTY_LIST;
                return;
            }
            return;
        }
        int i10 = 0;
        while (true) {
            ArrayList arrayList = this.f20347l;
            if (i10 >= arrayList.size()) {
                return;
            }
            ((b) arrayList.get(i10)).f20340g = i5;
            i10++;
        }
    }

    @Override // xd.h, mc.d
    public final void release() {
    }
}
