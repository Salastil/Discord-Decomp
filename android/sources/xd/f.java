package xd;

import a4.i;
import android.text.Layout;
import android.text.SpannableStringBuilder;
import com.discord.chat.presentation.message.view.MediaImageViewKt;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import ke.v;
import ke.w;

/* loaded from: classes3.dex */
public final class f extends h {

    /* renamed from: g, reason: collision with root package name */
    public final w f20385g = new w();

    /* renamed from: h, reason: collision with root package name */
    public final v f20386h = new v();

    /* renamed from: i, reason: collision with root package name */
    public int f20387i = -1;
    public final int j;
    public final e[] k;

    /* renamed from: l, reason: collision with root package name */
    public e f20388l;

    /* renamed from: m, reason: collision with root package name */
    public List f20389m;

    /* renamed from: n, reason: collision with root package name */
    public List f20390n;

    /* renamed from: o, reason: collision with root package name */
    public v f20391o;

    /* renamed from: p, reason: collision with root package name */
    public int f20392p;

    public f(int i5, List list) {
        this.j = i5 == -1 ? 1 : i5;
        if (list != null && list.size() == 1 && ((byte[]) list.get(0)).length == 1) {
            byte b10 = ((byte[]) list.get(0))[0];
        }
        this.k = new e[8];
        for (int i6 = 0; i6 < 8; i6++) {
            this.k[i6] = new e();
        }
        this.f20388l = this.k[0];
    }

    @Override // xd.h
    public final i e() {
        List list = this.f20389m;
        this.f20390n = list;
        list.getClass();
        return new i(list);
    }

    @Override // xd.h
    public final void f(g gVar) {
        ByteBuffer byteBuffer = gVar.f14436v;
        byteBuffer.getClass();
        byte[] array = byteBuffer.array();
        int limit = byteBuffer.limit();
        w wVar = this.f20385g;
        wVar.D(array, limit);
        while (wVar.a() >= 3) {
            int u5 = wVar.u();
            int i5 = u5 & 3;
            boolean z5 = (u5 & 4) == 4;
            byte u6 = (byte) wVar.u();
            byte u10 = (byte) wVar.u();
            if (i5 == 2 || i5 == 3) {
                if (z5) {
                    if (i5 == 3) {
                        i();
                        int i6 = (u6 & 192) >> 6;
                        int i10 = this.f20387i;
                        if (i10 != -1 && i6 != (i10 + 1) % 4) {
                            k();
                            ke.b.N("Cea708Decoder", "Sequence number discontinuity. previous=" + this.f20387i + " current=" + i6);
                        }
                        this.f20387i = i6;
                        int i11 = u6 & 63;
                        if (i11 == 0) {
                            i11 = 64;
                        }
                        v vVar = new v(i6, i11);
                        this.f20391o = vVar;
                        byte[] bArr = vVar.f13356b;
                        vVar.f13359e = 1;
                        bArr[0] = u10;
                    } else {
                        ke.b.g(i5 == 2);
                        v vVar2 = this.f20391o;
                        if (vVar2 == null) {
                            ke.b.r("Cea708Decoder", "Encountered DTVCC_PACKET_DATA before DTVCC_PACKET_START");
                        } else {
                            byte[] bArr2 = vVar2.f13356b;
                            int i12 = vVar2.f13359e;
                            int i13 = i12 + 1;
                            vVar2.f13359e = i13;
                            bArr2[i12] = u6;
                            vVar2.f13359e = i12 + 2;
                            bArr2[i13] = u10;
                        }
                    }
                    v vVar3 = this.f20391o;
                    if (vVar3.f13359e == (vVar3.f13358d * 2) - 1) {
                        i();
                    }
                }
            }
        }
    }

    @Override // xd.h, mc.d
    public final void flush() {
        super.flush();
        this.f20389m = null;
        this.f20390n = null;
        this.f20392p = 0;
        this.f20388l = this.k[0];
        k();
        this.f20391o = null;
    }

    @Override // xd.h
    public final boolean h() {
        return this.f20389m != this.f20390n;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public final void i() {
        int i5;
        int i6;
        boolean z5;
        char c6;
        int i10;
        v vVar = this.f20391o;
        if (vVar == null) {
            return;
        }
        int i11 = 2;
        if (vVar.f13359e != (vVar.f13358d * 2) - 1) {
            ke.b.q("Cea708Decoder", "DtvCcPacket ended prematurely; size is " + ((this.f20391o.f13358d * 2) - 1) + ", but current index is " + this.f20391o.f13359e + " (sequence number " + this.f20391o.f13357c + ");");
        }
        v vVar2 = this.f20391o;
        byte[] bArr = vVar2.f13356b;
        int i12 = vVar2.f13359e;
        v vVar3 = this.f20386h;
        vVar3.o(bArr, i12);
        boolean z6 = false;
        while (true) {
            if (vVar3.b() > 0) {
                int i13 = 3;
                int i14 = vVar3.i(3);
                int i15 = vVar3.i(5);
                if (i14 == 7) {
                    vVar3.s(i11);
                    i14 = vVar3.i(6);
                    if (i14 < 7) {
                        com.discord.chat.bridge.botuikit.a.q(i14, "Invalid extended service number: ", "Cea708Decoder");
                    }
                }
                if (i15 == 0) {
                    if (i14 != 0) {
                        ke.b.N("Cea708Decoder", "serviceNumber is non-zero (" + i14 + ") when blockSize is 0");
                    }
                } else if (i14 != this.j) {
                    vVar3.t(i15);
                } else {
                    int g6 = (i15 * 8) + vVar3.g();
                    while (vVar3.g() < g6) {
                        int i16 = vVar3.i(8);
                        if (i16 != 16) {
                            if (i16 <= 31) {
                                if (i16 != 0) {
                                    if (i16 == i13) {
                                        this.f20389m = j();
                                    } else if (i16 != 8) {
                                        switch (i16) {
                                            case 12:
                                                k();
                                                break;
                                            case 13:
                                                this.f20388l.a('\n');
                                                break;
                                            case 14:
                                                break;
                                            default:
                                                if (i16 < 17 || i16 > 23) {
                                                    if (i16 < 24 || i16 > 31) {
                                                        com.discord.chat.bridge.botuikit.a.q(i16, "Invalid C0 command: ", "Cea708Decoder");
                                                        break;
                                                    } else {
                                                        ke.b.N("Cea708Decoder", "Currently unsupported COMMAND_P16 Command: " + i16);
                                                        vVar3.s(16);
                                                        break;
                                                    }
                                                } else {
                                                    ke.b.N("Cea708Decoder", "Currently unsupported COMMAND_EXT1 Command: " + i16);
                                                    vVar3.s(8);
                                                    break;
                                                }
                                        }
                                    } else {
                                        SpannableStringBuilder spannableStringBuilder = this.f20388l.f20366b;
                                        int length = spannableStringBuilder.length();
                                        if (length > 0) {
                                            spannableStringBuilder.delete(length - 1, length);
                                        }
                                    }
                                }
                                i10 = i11;
                                i5 = i13;
                                i6 = g6;
                            } else if (i16 <= 127) {
                                if (i16 == 127) {
                                    this.f20388l.a((char) 9835);
                                } else {
                                    this.f20388l.a((char) (i16 & 255));
                                }
                                i10 = i11;
                                i5 = i13;
                                i6 = g6;
                                z6 = true;
                            } else {
                                if (i16 <= 159) {
                                    e[] eVarArr = this.k;
                                    switch (i16) {
                                        case IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT /* 128 */:
                                        case 129:
                                        case 130:
                                        case 131:
                                        case 132:
                                        case 133:
                                        case 134:
                                        case 135:
                                            i5 = i13;
                                            i6 = g6;
                                            z5 = true;
                                            int i17 = i16 - 128;
                                            if (this.f20392p != i17) {
                                                this.f20392p = i17;
                                                this.f20388l = eVarArr[i17];
                                                break;
                                            }
                                            break;
                                        case 136:
                                            i5 = i13;
                                            i6 = g6;
                                            z5 = true;
                                            for (int i18 = 1; i18 <= 8; i18++) {
                                                if (vVar3.h()) {
                                                    e eVar = eVarArr[8 - i18];
                                                    eVar.a.clear();
                                                    eVar.f20366b.clear();
                                                    eVar.f20378p = -1;
                                                    eVar.f20379q = -1;
                                                    eVar.f20380r = -1;
                                                    eVar.f20382t = -1;
                                                    eVar.f20384v = 0;
                                                }
                                            }
                                            break;
                                        case 137:
                                            i5 = i13;
                                            i6 = g6;
                                            for (int i19 = 1; i19 <= 8; i19++) {
                                                if (vVar3.h()) {
                                                    eVarArr[8 - i19].f20368d = true;
                                                }
                                            }
                                            z5 = true;
                                            break;
                                        case 138:
                                            i5 = i13;
                                            i6 = g6;
                                            for (int i20 = 1; i20 <= 8; i20++) {
                                                if (vVar3.h()) {
                                                    eVarArr[8 - i20].f20368d = false;
                                                }
                                            }
                                            z5 = true;
                                            break;
                                        case 139:
                                            i5 = i13;
                                            i6 = g6;
                                            for (int i21 = 1; i21 <= 8; i21++) {
                                                if (vVar3.h()) {
                                                    eVarArr[8 - i21].f20368d = !r1.f20368d;
                                                }
                                            }
                                            z5 = true;
                                            break;
                                        case 140:
                                            i5 = i13;
                                            i6 = g6;
                                            for (int i22 = 1; i22 <= 8; i22++) {
                                                if (vVar3.h()) {
                                                    eVarArr[8 - i22].d();
                                                }
                                            }
                                            z5 = true;
                                            break;
                                        case 141:
                                            i5 = i13;
                                            i6 = g6;
                                            vVar3.s(8);
                                            z5 = true;
                                            break;
                                        case 142:
                                            i5 = i13;
                                            i6 = g6;
                                            z5 = true;
                                            break;
                                        case 143:
                                            i5 = i13;
                                            i6 = g6;
                                            k();
                                            z5 = true;
                                            break;
                                        case 144:
                                            int i23 = i11;
                                            i6 = g6;
                                            if (!this.f20388l.f20367c) {
                                                vVar3.s(16);
                                                i5 = 3;
                                                z5 = true;
                                                break;
                                            } else {
                                                vVar3.i(4);
                                                vVar3.i(i23);
                                                vVar3.i(i23);
                                                boolean h6 = vVar3.h();
                                                boolean h7 = vVar3.h();
                                                i5 = 3;
                                                vVar3.i(3);
                                                vVar3.i(3);
                                                this.f20388l.e(h6, h7);
                                                z5 = true;
                                            }
                                        case 145:
                                            i6 = g6;
                                            if (this.f20388l.f20367c) {
                                                int c8 = e.c(vVar3.i(2), vVar3.i(2), vVar3.i(2), vVar3.i(2));
                                                int c10 = e.c(vVar3.i(2), vVar3.i(2), vVar3.i(2), vVar3.i(2));
                                                vVar3.s(2);
                                                e.c(vVar3.i(2), vVar3.i(2), vVar3.i(2), 0);
                                                this.f20388l.f(c8, c10);
                                            } else {
                                                vVar3.s(24);
                                            }
                                            i5 = 3;
                                            z5 = true;
                                            break;
                                        case MediaImageViewKt.OBSCURED_IMAGE_MIN_WIDTH /* 146 */:
                                            i6 = g6;
                                            if (this.f20388l.f20367c) {
                                                vVar3.s(4);
                                                int i24 = vVar3.i(4);
                                                vVar3.s(2);
                                                vVar3.i(6);
                                                e eVar2 = this.f20388l;
                                                if (eVar2.f20384v != i24) {
                                                    eVar2.a('\n');
                                                }
                                                eVar2.f20384v = i24;
                                            } else {
                                                vVar3.s(16);
                                            }
                                            i5 = 3;
                                            z5 = true;
                                            break;
                                        case 147:
                                        case 148:
                                        case 149:
                                        case 150:
                                        default:
                                            com.discord.chat.bridge.botuikit.a.q(i16, "Invalid C1 command: ", "Cea708Decoder");
                                            i5 = i13;
                                            i6 = g6;
                                            z5 = true;
                                            break;
                                        case 151:
                                            i6 = g6;
                                            if (this.f20388l.f20367c) {
                                                int c11 = e.c(vVar3.i(2), vVar3.i(2), vVar3.i(2), vVar3.i(2));
                                                vVar3.i(2);
                                                e.c(vVar3.i(2), vVar3.i(2), vVar3.i(2), 0);
                                                vVar3.h();
                                                vVar3.h();
                                                vVar3.i(2);
                                                vVar3.i(2);
                                                int i25 = vVar3.i(2);
                                                vVar3.s(8);
                                                e eVar3 = this.f20388l;
                                                eVar3.f20377o = c11;
                                                eVar3.f20374l = i25;
                                            } else {
                                                vVar3.s(32);
                                            }
                                            i5 = 3;
                                            z5 = true;
                                            break;
                                        case 152:
                                        case 153:
                                        case 154:
                                        case 155:
                                        case 156:
                                        case 157:
                                        case 158:
                                        case 159:
                                            int i26 = i16 - 152;
                                            e eVar4 = eVarArr[i26];
                                            vVar3.s(i11);
                                            boolean h10 = vVar3.h();
                                            boolean h11 = vVar3.h();
                                            vVar3.h();
                                            int i27 = vVar3.i(i13);
                                            boolean h12 = vVar3.h();
                                            int i28 = vVar3.i(7);
                                            int i29 = vVar3.i(8);
                                            int i30 = vVar3.i(4);
                                            int i31 = vVar3.i(4);
                                            vVar3.s(i11);
                                            vVar3.i(6);
                                            vVar3.s(i11);
                                            int i32 = vVar3.i(3);
                                            int i33 = vVar3.i(3);
                                            ArrayList arrayList = eVar4.a;
                                            i6 = g6;
                                            eVar4.f20367c = true;
                                            eVar4.f20368d = h10;
                                            eVar4.k = h11;
                                            eVar4.f20369e = i27;
                                            eVar4.f20370f = h12;
                                            eVar4.f20371g = i28;
                                            eVar4.f20372h = i29;
                                            eVar4.f20373i = i30;
                                            int i34 = i31 + 1;
                                            if (eVar4.j != i34) {
                                                eVar4.j = i34;
                                                while (true) {
                                                    if ((h11 && arrayList.size() >= eVar4.j) || arrayList.size() >= 15) {
                                                        arrayList.remove(0);
                                                    }
                                                }
                                            }
                                            if (i32 != 0 && eVar4.f20375m != i32) {
                                                eVar4.f20375m = i32;
                                                int i35 = i32 - 1;
                                                int i36 = e.C[i35];
                                                boolean z7 = e.B[i35];
                                                int i37 = e.f20365z[i35];
                                                int i38 = e.A[i35];
                                                int i39 = e.f20364y[i35];
                                                eVar4.f20377o = i36;
                                                eVar4.f20374l = i39;
                                            }
                                            if (i33 != 0 && eVar4.f20376n != i33) {
                                                eVar4.f20376n = i33;
                                                int i40 = i33 - 1;
                                                int i41 = e.E[i40];
                                                int i42 = e.D[i40];
                                                eVar4.e(false, false);
                                                eVar4.f(e.f20362w, e.F[i40]);
                                            }
                                            if (this.f20392p != i26) {
                                                this.f20392p = i26;
                                                this.f20388l = eVarArr[i26];
                                            }
                                            i5 = 3;
                                            z5 = true;
                                            break;
                                    }
                                } else {
                                    i5 = i13;
                                    i6 = g6;
                                    z5 = true;
                                    if (i16 <= 255) {
                                        this.f20388l.a((char) (i16 & 255));
                                    } else {
                                        com.discord.chat.bridge.botuikit.a.q(i16, "Invalid base command: ", "Cea708Decoder");
                                        i10 = 2;
                                        c6 = 7;
                                    }
                                }
                                z6 = z5;
                                i10 = 2;
                                c6 = 7;
                            }
                            z5 = true;
                            c6 = 7;
                        } else {
                            i5 = i13;
                            i6 = g6;
                            z5 = true;
                            int i43 = vVar3.i(8);
                            if (i43 <= 31) {
                                c6 = 7;
                                if (i43 > 7) {
                                    if (i43 <= 15) {
                                        vVar3.s(8);
                                    } else if (i43 <= 23) {
                                        vVar3.s(16);
                                    } else if (i43 <= 31) {
                                        vVar3.s(24);
                                    }
                                }
                            } else {
                                c6 = 7;
                                if (i43 <= 127) {
                                    if (i43 == 32) {
                                        this.f20388l.a(' ');
                                    } else if (i43 == 33) {
                                        this.f20388l.a((char) 160);
                                    } else if (i43 == 37) {
                                        this.f20388l.a((char) 8230);
                                    } else if (i43 == 42) {
                                        this.f20388l.a((char) 352);
                                    } else if (i43 == 44) {
                                        this.f20388l.a((char) 338);
                                    } else if (i43 == 63) {
                                        this.f20388l.a((char) 376);
                                    } else if (i43 == 57) {
                                        this.f20388l.a((char) 8482);
                                    } else if (i43 == 58) {
                                        this.f20388l.a((char) 353);
                                    } else if (i43 == 60) {
                                        this.f20388l.a((char) 339);
                                    } else if (i43 != 61) {
                                        switch (i43) {
                                            case 48:
                                                this.f20388l.a((char) 9608);
                                                break;
                                            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                                                this.f20388l.a((char) 8216);
                                                break;
                                            case 50:
                                                this.f20388l.a((char) 8217);
                                                break;
                                            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                                this.f20388l.a((char) 8220);
                                                break;
                                            case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                                this.f20388l.a((char) 8221);
                                                break;
                                            case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                                                this.f20388l.a((char) 8226);
                                                break;
                                            default:
                                                switch (i43) {
                                                    case 118:
                                                        this.f20388l.a((char) 8539);
                                                        break;
                                                    case 119:
                                                        this.f20388l.a((char) 8540);
                                                        break;
                                                    case 120:
                                                        this.f20388l.a((char) 8541);
                                                        break;
                                                    case 121:
                                                        this.f20388l.a((char) 8542);
                                                        break;
                                                    case 122:
                                                        this.f20388l.a((char) 9474);
                                                        break;
                                                    case 123:
                                                        this.f20388l.a((char) 9488);
                                                        break;
                                                    case 124:
                                                        this.f20388l.a((char) 9492);
                                                        break;
                                                    case 125:
                                                        this.f20388l.a((char) 9472);
                                                        break;
                                                    case 126:
                                                        this.f20388l.a((char) 9496);
                                                        break;
                                                    case 127:
                                                        this.f20388l.a((char) 9484);
                                                        break;
                                                    default:
                                                        com.discord.chat.bridge.botuikit.a.q(i43, "Invalid G2 character: ", "Cea708Decoder");
                                                        break;
                                                }
                                        }
                                    } else {
                                        this.f20388l.a((char) 8480);
                                    }
                                    z6 = true;
                                } else if (i43 > 159) {
                                    i10 = 2;
                                    if (i43 <= 255) {
                                        if (i43 == 160) {
                                            this.f20388l.a((char) 13252);
                                        } else {
                                            com.discord.chat.bridge.botuikit.a.q(i43, "Invalid G3 character: ", "Cea708Decoder");
                                            this.f20388l.a('_');
                                        }
                                        z6 = true;
                                    } else {
                                        com.discord.chat.bridge.botuikit.a.q(i43, "Invalid extended command: ", "Cea708Decoder");
                                    }
                                } else if (i43 <= 135) {
                                    vVar3.s(32);
                                } else if (i43 <= 143) {
                                    vVar3.s(40);
                                } else if (i43 <= 159) {
                                    i10 = 2;
                                    vVar3.s(2);
                                    vVar3.s(vVar3.i(6) * 8);
                                }
                            }
                            i10 = 2;
                        }
                        g6 = i6;
                        i13 = i5;
                        i11 = i10;
                    }
                }
            }
        }
        if (z6) {
            this.f20389m = j();
        }
        this.f20391o = null;
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x0099  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00c2  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00d0  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00dd  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00df  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00c5  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00a4  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List j() {
        d dVar;
        Layout.Alignment alignment;
        float f2;
        float f10;
        int i5;
        int i6;
        int i10;
        ArrayList arrayList = new ArrayList();
        for (int i11 = 0; i11 < 8; i11++) {
            e[] eVarArr = this.k;
            e eVar = eVarArr[i11];
            if (eVar.f20367c && (!eVar.a.isEmpty() || eVar.f20366b.length() != 0)) {
                e eVar2 = eVarArr[i11];
                if (eVar2.f20368d) {
                    ArrayList arrayList2 = eVar2.a;
                    if (!eVar2.f20367c || (arrayList2.isEmpty() && eVar2.f20366b.length() == 0)) {
                        dVar = null;
                    } else {
                        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
                        for (int i12 = 0; i12 < arrayList2.size(); i12++) {
                            spannableStringBuilder.append((CharSequence) arrayList2.get(i12));
                            spannableStringBuilder.append('\n');
                        }
                        spannableStringBuilder.append((CharSequence) eVar2.b());
                        int i13 = eVar2.f20374l;
                        if (i13 != 0) {
                            if (i13 == 1) {
                                alignment = Layout.Alignment.ALIGN_OPPOSITE;
                            } else if (i13 == 2) {
                                alignment = Layout.Alignment.ALIGN_CENTER;
                            } else if (i13 != 3) {
                                throw new IllegalArgumentException("Unexpected justification value: " + eVar2.f20374l);
                            }
                            Layout.Alignment alignment2 = alignment;
                            if (eVar2.f20370f) {
                                f2 = eVar2.f20372h / 209.0f;
                                f10 = eVar2.f20371g / 74.0f;
                            } else {
                                f2 = eVar2.f20372h / 99.0f;
                                f10 = eVar2.f20371g / 99.0f;
                            }
                            float f11 = (f2 * 0.9f) + 0.05f;
                            float f12 = (f10 * 0.9f) + 0.05f;
                            int i14 = eVar2.f20373i;
                            i5 = i14 / 3;
                            if (i5 != 0) {
                                i6 = i14;
                                i10 = 0;
                            } else if (i5 == 1) {
                                i6 = i14;
                                i10 = 1;
                            } else {
                                i6 = i14;
                                i10 = 2;
                            }
                            int i15 = i6 % 3;
                            int i16 = i15 != 0 ? 0 : i15 == 1 ? 1 : 2;
                            int i17 = eVar2.f20377o;
                            dVar = new d(spannableStringBuilder, alignment2, f12, i10, f11, i16, i17 == e.f20363x, i17, eVar2.f20369e);
                        }
                        alignment = Layout.Alignment.ALIGN_NORMAL;
                        Layout.Alignment alignment22 = alignment;
                        if (eVar2.f20370f) {
                        }
                        float f112 = (f2 * 0.9f) + 0.05f;
                        float f122 = (f10 * 0.9f) + 0.05f;
                        int i142 = eVar2.f20373i;
                        i5 = i142 / 3;
                        if (i5 != 0) {
                        }
                        int i152 = i6 % 3;
                        if (i152 != 0) {
                        }
                        int i172 = eVar2.f20377o;
                        dVar = new d(spannableStringBuilder, alignment22, f122, i10, f112, i16, i172 == e.f20363x, i172, eVar2.f20369e);
                    }
                    if (dVar != null) {
                        arrayList.add(dVar);
                    }
                } else {
                    continue;
                }
            }
        }
        Collections.sort(arrayList, d.f20360c);
        ArrayList arrayList3 = new ArrayList(arrayList.size());
        for (int i18 = 0; i18 < arrayList.size(); i18++) {
            arrayList3.add(((d) arrayList.get(i18)).a);
        }
        return Collections.unmodifiableList(arrayList3);
    }

    public final void k() {
        for (int i5 = 0; i5 < 8; i5++) {
            this.k[i5].d();
        }
    }
}
