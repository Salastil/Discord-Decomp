package rf;

import android.app.PendingIntent;
import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.fido.fido2.api.common.AuthenticationExtensions;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class s0 implements Parcelable.Creator {
    public final /* synthetic */ int a;

    public /* synthetic */ s0(int i5) {
        this.a = i5;
    }

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                try {
                    return f0.a(parcel.readString());
                } catch (g0 e9) {
                    throw new RuntimeException(e9);
                }
            case 1:
                try {
                    return e.a(parcel.readString());
                } catch (d e10) {
                    throw new RuntimeException(e10);
                }
            case 2:
                int g02 = ys.d.g0(parcel);
                String str = null;
                String str2 = null;
                while (parcel.dataPosition() < g02) {
                    int readInt = parcel.readInt();
                    char c6 = (char) readInt;
                    if (c6 == 2) {
                        str = ys.d.B(readInt, parcel);
                    } else if (c6 != 3) {
                        ys.d.e0(readInt, parcel);
                    } else {
                        str2 = ys.d.B(readInt, parcel);
                    }
                }
                ys.d.G(g02, parcel);
                return new h0(str, str2);
            case 3:
                int g03 = ys.d.g0(parcel);
                boolean z5 = false;
                while (parcel.dataPosition() < g03) {
                    int readInt2 = parcel.readInt();
                    if (((char) readInt2) != 1) {
                        ys.d.e0(readInt2, parcel);
                    } else {
                        z5 = ys.d.T(readInt2, parcel);
                    }
                }
                ys.d.G(g03, parcel);
                return new i0(z5);
            case 4:
                try {
                    return j0.a(parcel.readString());
                } catch (t0 e11) {
                    throw new RuntimeException(e11);
                }
            case 5:
                int g04 = ys.d.g0(parcel);
                ArrayList arrayList = null;
                while (parcel.dataPosition() < g04) {
                    int readInt3 = parcel.readInt();
                    if (((char) readInt3) != 1) {
                        ys.d.e0(readInt3, parcel);
                    } else {
                        arrayList = ys.d.E(parcel, readInt3, l0.CREATOR);
                    }
                }
                ys.d.G(g04, parcel);
                return new k0(arrayList);
            case 6:
                int g05 = ys.d.g0(parcel);
                int i5 = 0;
                short s2 = 0;
                short s5 = 0;
                while (parcel.dataPosition() < g05) {
                    int readInt4 = parcel.readInt();
                    char c8 = (char) readInt4;
                    if (c8 == 1) {
                        i5 = ys.d.V(readInt4, parcel);
                    } else if (c8 == 2) {
                        ys.d.i0(parcel, readInt4, 4);
                        s2 = (short) parcel.readInt();
                    } else if (c8 != 3) {
                        ys.d.e0(readInt4, parcel);
                    } else {
                        ys.d.i0(parcel, readInt4, 4);
                        s5 = (short) parcel.readInt();
                    }
                }
                ys.d.G(g05, parcel);
                return new l0(s2, s5, i5);
            case 7:
                int g06 = ys.d.g0(parcel);
                k0 k0Var = null;
                u0 u0Var = null;
                g gVar = null;
                v0 v0Var = null;
                String str3 = null;
                while (parcel.dataPosition() < g06) {
                    int readInt5 = parcel.readInt();
                    char c10 = (char) readInt5;
                    if (c10 == 1) {
                        k0Var = (k0) ys.d.A(parcel, readInt5, k0.CREATOR);
                    } else if (c10 == 2) {
                        u0Var = (u0) ys.d.A(parcel, readInt5, u0.CREATOR);
                    } else if (c10 == 3) {
                        gVar = (g) ys.d.A(parcel, readInt5, g.CREATOR);
                    } else if (c10 == 4) {
                        v0Var = (v0) ys.d.A(parcel, readInt5, v0.CREATOR);
                    } else if (c10 != 5) {
                        ys.d.e0(readInt5, parcel);
                    } else {
                        str3 = ys.d.B(readInt5, parcel);
                    }
                }
                ys.d.G(g06, parcel);
                return new f(k0Var, u0Var, gVar, v0Var, str3);
            case 8:
                int g07 = ys.d.g0(parcel);
                r rVar = null;
                x0 x0Var = null;
                i0 i0Var = null;
                z0 z0Var = null;
                m0 m0Var = null;
                n0 n0Var = null;
                y0 y0Var = null;
                o0 o0Var = null;
                s sVar = null;
                q0 q0Var = null;
                r0 r0Var = null;
                p0 p0Var = null;
                t tVar = null;
                while (parcel.dataPosition() < g07) {
                    int readInt6 = parcel.readInt();
                    switch ((char) readInt6) {
                        case 2:
                            rVar = (r) ys.d.A(parcel, readInt6, r.CREATOR);
                            break;
                        case 3:
                            x0Var = (x0) ys.d.A(parcel, readInt6, x0.CREATOR);
                            break;
                        case 4:
                            i0Var = (i0) ys.d.A(parcel, readInt6, i0.CREATOR);
                            break;
                        case 5:
                            z0Var = (z0) ys.d.A(parcel, readInt6, z0.CREATOR);
                            break;
                        case 6:
                            m0Var = (m0) ys.d.A(parcel, readInt6, m0.CREATOR);
                            break;
                        case 7:
                            n0Var = (n0) ys.d.A(parcel, readInt6, n0.CREATOR);
                            break;
                        case '\b':
                            y0Var = (y0) ys.d.A(parcel, readInt6, y0.CREATOR);
                            break;
                        case '\t':
                            o0Var = (o0) ys.d.A(parcel, readInt6, o0.CREATOR);
                            break;
                        case '\n':
                            sVar = (s) ys.d.A(parcel, readInt6, s.CREATOR);
                            break;
                        case 11:
                            q0Var = (q0) ys.d.A(parcel, readInt6, q0.CREATOR);
                            break;
                        case '\f':
                            r0Var = (r0) ys.d.A(parcel, readInt6, r0.CREATOR);
                            break;
                        case '\r':
                            p0Var = (p0) ys.d.A(parcel, readInt6, p0.CREATOR);
                            break;
                        case 14:
                            tVar = (t) ys.d.A(parcel, readInt6, t.CREATOR);
                            break;
                        default:
                            ys.d.e0(readInt6, parcel);
                            break;
                    }
                }
                ys.d.G(g07, parcel);
                return new AuthenticationExtensions(rVar, x0Var, i0Var, z0Var, m0Var, n0Var, y0Var, o0Var, sVar, q0Var, r0Var, p0Var, tVar);
            case 9:
                int g08 = ys.d.g0(parcel);
                boolean z6 = false;
                while (parcel.dataPosition() < g08) {
                    int readInt7 = parcel.readInt();
                    if (((char) readInt7) != 1) {
                        ys.d.e0(readInt7, parcel);
                    } else {
                        z6 = ys.d.T(readInt7, parcel);
                    }
                }
                ys.d.G(g08, parcel);
                return new g(z6);
            case 10:
                int g09 = ys.d.g0(parcel);
                byte[] bArr = null;
                byte[] bArr2 = null;
                while (parcel.dataPosition() < g09) {
                    int readInt8 = parcel.readInt();
                    char c11 = (char) readInt8;
                    if (c11 == 1) {
                        bArr = ys.d.z(readInt8, parcel);
                    } else if (c11 != 2) {
                        ys.d.e0(readInt8, parcel);
                    } else {
                        bArr2 = ys.d.z(readInt8, parcel);
                    }
                }
                ys.d.G(g09, parcel);
                return new u0(bArr == null ? null : bg.w0.k(bArr, bArr.length), bArr2 != null ? bg.w0.k(bArr2, bArr2.length) : null);
            case 11:
                int g010 = ys.d.g0(parcel);
                boolean z7 = false;
                byte[] bArr3 = null;
                while (parcel.dataPosition() < g010) {
                    int readInt9 = parcel.readInt();
                    char c12 = (char) readInt9;
                    if (c12 == 1) {
                        z7 = ys.d.T(readInt9, parcel);
                    } else if (c12 != 2) {
                        ys.d.e0(readInt9, parcel);
                    } else {
                        bArr3 = ys.d.z(readInt9, parcel);
                    }
                }
                ys.d.G(g010, parcel);
                return new v0(z7, bArr3 != null ? bg.w0.k(bArr3, bArr3.length) : null);
            case 12:
                int g011 = ys.d.g0(parcel);
                byte[] bArr4 = null;
                byte[] bArr5 = null;
                byte[] bArr6 = null;
                byte[] bArr7 = null;
                byte[] bArr8 = null;
                while (parcel.dataPosition() < g011) {
                    int readInt10 = parcel.readInt();
                    char c13 = (char) readInt10;
                    if (c13 == 2) {
                        bArr4 = ys.d.z(readInt10, parcel);
                    } else if (c13 == 3) {
                        bArr5 = ys.d.z(readInt10, parcel);
                    } else if (c13 == 4) {
                        bArr6 = ys.d.z(readInt10, parcel);
                    } else if (c13 == 5) {
                        bArr7 = ys.d.z(readInt10, parcel);
                    } else if (c13 != 6) {
                        ys.d.e0(readInt10, parcel);
                    } else {
                        bArr8 = ys.d.z(readInt10, parcel);
                    }
                }
                ys.d.G(g011, parcel);
                return new h(bArr4, bArr5, bArr6, bArr7, bArr8);
            case 13:
                int g012 = ys.d.g0(parcel);
                byte[] bArr9 = null;
                byte[] bArr10 = null;
                byte[] bArr11 = null;
                String[] strArr = null;
                while (parcel.dataPosition() < g012) {
                    int readInt11 = parcel.readInt();
                    char c14 = (char) readInt11;
                    if (c14 == 2) {
                        bArr9 = ys.d.z(readInt11, parcel);
                    } else if (c14 == 3) {
                        bArr10 = ys.d.z(readInt11, parcel);
                    } else if (c14 == 4) {
                        bArr11 = ys.d.z(readInt11, parcel);
                    } else if (c14 != 5) {
                        ys.d.e0(readInt11, parcel);
                    } else {
                        int Y = ys.d.Y(readInt11, parcel);
                        int dataPosition = parcel.dataPosition();
                        if (Y == 0) {
                            strArr = null;
                        } else {
                            String[] createStringArray = parcel.createStringArray();
                            parcel.setDataPosition(dataPosition + Y);
                            strArr = createStringArray;
                        }
                    }
                }
                ys.d.G(g012, parcel);
                return new i(bArr9, bArr10, bArr11, strArr);
            case 14:
                int g013 = ys.d.g0(parcel);
                int i6 = 0;
                String str4 = null;
                int i10 = 0;
                while (parcel.dataPosition() < g013) {
                    int readInt12 = parcel.readInt();
                    char c15 = (char) readInt12;
                    if (c15 == 2) {
                        i6 = ys.d.V(readInt12, parcel);
                    } else if (c15 == 3) {
                        str4 = ys.d.B(readInt12, parcel);
                    } else if (c15 != 4) {
                        ys.d.e0(readInt12, parcel);
                    } else {
                        i10 = ys.d.V(readInt12, parcel);
                    }
                }
                ys.d.G(g013, parcel);
                return new j(i6, i10, str4);
            case 15:
                int g014 = ys.d.g0(parcel);
                String str5 = null;
                Boolean bool = null;
                String str6 = null;
                String str7 = null;
                while (parcel.dataPosition() < g014) {
                    int readInt13 = parcel.readInt();
                    char c16 = (char) readInt13;
                    if (c16 == 2) {
                        str5 = ys.d.B(readInt13, parcel);
                    } else if (c16 == 3) {
                        int Y2 = ys.d.Y(readInt13, parcel);
                        if (Y2 == 0) {
                            bool = null;
                        } else {
                            ys.d.k0(parcel, Y2, 4);
                            bool = Boolean.valueOf(parcel.readInt() != 0);
                        }
                    } else if (c16 == 4) {
                        str6 = ys.d.B(readInt13, parcel);
                    } else if (c16 != 5) {
                        ys.d.e0(readInt13, parcel);
                    } else {
                        str7 = ys.d.B(readInt13, parcel);
                    }
                }
                ys.d.G(g014, parcel);
                return new l(str5, bool, str6, str7);
            case 16:
                try {
                    return n.a(Integer.valueOf(parcel.readInt()).intValue());
                } catch (m e12) {
                    throw new RuntimeException(e12);
                }
            case 17:
                int g015 = ys.d.g0(parcel);
                byte[] bArr12 = null;
                byte[] bArr13 = null;
                byte[] bArr14 = null;
                long j = 0;
                while (parcel.dataPosition() < g015) {
                    int readInt14 = parcel.readInt();
                    char c17 = (char) readInt14;
                    if (c17 == 1) {
                        j = ys.d.X(readInt14, parcel);
                    } else if (c17 == 2) {
                        bArr12 = ys.d.z(readInt14, parcel);
                    } else if (c17 == 3) {
                        bArr13 = ys.d.z(readInt14, parcel);
                    } else if (c17 != 4) {
                        ys.d.e0(readInt14, parcel);
                    } else {
                        bArr14 = ys.d.z(readInt14, parcel);
                    }
                }
                ys.d.G(g015, parcel);
                return new w0(j, bArr12, bArr13, bArr14);
            case 18:
                int g016 = ys.d.g0(parcel);
                ArrayList arrayList2 = null;
                while (parcel.dataPosition() < g016) {
                    int readInt15 = parcel.readInt();
                    if (((char) readInt15) != 1) {
                        ys.d.e0(readInt15, parcel);
                    } else {
                        arrayList2 = ys.d.E(parcel, readInt15, w0.CREATOR);
                    }
                }
                ys.d.G(g016, parcel);
                return new x0(arrayList2);
            case 19:
                int g017 = ys.d.g0(parcel);
                while (parcel.dataPosition() < g017) {
                    int readInt16 = parcel.readInt();
                    if (((char) readInt16) != 1) {
                        ys.d.e0(readInt16, parcel);
                    } else {
                        ys.d.T(readInt16, parcel);
                    }
                }
                ys.d.G(g017, parcel);
                return new y0();
            case 20:
                try {
                    return q.a(parcel.readInt());
                } catch (p e13) {
                    throw new IllegalArgumentException(e13);
                }
            case 21:
                int g018 = ys.d.g0(parcel);
                String str8 = null;
                while (parcel.dataPosition() < g018) {
                    int readInt17 = parcel.readInt();
                    if (((char) readInt17) != 2) {
                        ys.d.e0(readInt17, parcel);
                    } else {
                        str8 = ys.d.B(readInt17, parcel);
                    }
                }
                ys.d.G(g018, parcel);
                return new r(str8);
            case 22:
                int g019 = ys.d.g0(parcel);
                boolean z8 = false;
                int i11 = 0;
                boolean z10 = false;
                se.d dVar = null;
                se.a aVar = null;
                String str9 = null;
                se.c cVar = null;
                se.b bVar = null;
                while (parcel.dataPosition() < g019) {
                    int readInt18 = parcel.readInt();
                    switch ((char) readInt18) {
                        case 1:
                            dVar = (se.d) ys.d.A(parcel, readInt18, se.d.CREATOR);
                            break;
                        case 2:
                            aVar = (se.a) ys.d.A(parcel, readInt18, se.a.CREATOR);
                            break;
                        case 3:
                            str9 = ys.d.B(readInt18, parcel);
                            break;
                        case 4:
                            z8 = ys.d.T(readInt18, parcel);
                            break;
                        case 5:
                            i11 = ys.d.V(readInt18, parcel);
                            break;
                        case 6:
                            cVar = (se.c) ys.d.A(parcel, readInt18, se.c.CREATOR);
                            break;
                        case 7:
                            bVar = (se.b) ys.d.A(parcel, readInt18, se.b.CREATOR);
                            break;
                        case '\b':
                            z10 = ys.d.T(readInt18, parcel);
                            break;
                        default:
                            ys.d.e0(readInt18, parcel);
                            break;
                    }
                }
                ys.d.G(g019, parcel);
                return new se.e(dVar, aVar, str9, z8, i11, cVar, bVar, z10);
            case 23:
                int g020 = ys.d.g0(parcel);
                PendingIntent pendingIntent = null;
                while (parcel.dataPosition() < g020) {
                    int readInt19 = parcel.readInt();
                    if (((char) readInt19) != 1) {
                        ys.d.e0(readInt19, parcel);
                    } else {
                        pendingIntent = (PendingIntent) ys.d.A(parcel, readInt19, PendingIntent.CREATOR);
                    }
                }
                ys.d.G(g020, parcel);
                return new se.f(pendingIntent);
            case 24:
                int g021 = ys.d.g0(parcel);
                boolean z11 = false;
                boolean z12 = false;
                boolean z13 = false;
                String str10 = null;
                String str11 = null;
                String str12 = null;
                ArrayList arrayList3 = null;
                while (parcel.dataPosition() < g021) {
                    int readInt20 = parcel.readInt();
                    switch ((char) readInt20) {
                        case 1:
                            z11 = ys.d.T(readInt20, parcel);
                            break;
                        case 2:
                            str10 = ys.d.B(readInt20, parcel);
                            break;
                        case 3:
                            str11 = ys.d.B(readInt20, parcel);
                            break;
                        case 4:
                            z12 = ys.d.T(readInt20, parcel);
                            break;
                        case 5:
                            str12 = ys.d.B(readInt20, parcel);
                            break;
                        case 6:
                            arrayList3 = ys.d.C(readInt20, parcel);
                            break;
                        case 7:
                            z13 = ys.d.T(readInt20, parcel);
                            break;
                        default:
                            ys.d.e0(readInt20, parcel);
                            break;
                    }
                }
                ys.d.G(g021, parcel);
                return new se.a(z11, str10, str11, z12, str12, arrayList3, z13);
            case 25:
                int g022 = ys.d.g0(parcel);
                String str13 = null;
                boolean z14 = false;
                while (parcel.dataPosition() < g022) {
                    int readInt21 = parcel.readInt();
                    char c18 = (char) readInt21;
                    if (c18 == 1) {
                        z14 = ys.d.T(readInt21, parcel);
                    } else if (c18 != 2) {
                        ys.d.e0(readInt21, parcel);
                    } else {
                        str13 = ys.d.B(readInt21, parcel);
                    }
                }
                ys.d.G(g022, parcel);
                return new se.b(z14, str13);
            case 26:
                int g023 = ys.d.g0(parcel);
                byte[] bArr15 = null;
                boolean z15 = false;
                String str14 = null;
                while (parcel.dataPosition() < g023) {
                    int readInt22 = parcel.readInt();
                    char c19 = (char) readInt22;
                    if (c19 == 1) {
                        z15 = ys.d.T(readInt22, parcel);
                    } else if (c19 == 2) {
                        bArr15 = ys.d.z(readInt22, parcel);
                    } else if (c19 != 3) {
                        ys.d.e0(readInt22, parcel);
                    } else {
                        str14 = ys.d.B(readInt22, parcel);
                    }
                }
                ys.d.G(g023, parcel);
                return new se.c(z15, bArr15, str14);
            case 27:
                int g024 = ys.d.g0(parcel);
                boolean z16 = false;
                while (parcel.dataPosition() < g024) {
                    int readInt23 = parcel.readInt();
                    if (((char) readInt23) != 1) {
                        ys.d.e0(readInt23, parcel);
                    } else {
                        z16 = ys.d.T(readInt23, parcel);
                    }
                }
                ys.d.G(g024, parcel);
                return new se.d(z16);
            case 28:
                int g025 = ys.d.g0(parcel);
                String str15 = null;
                String str16 = null;
                String str17 = null;
                String str18 = null;
                Uri uri = null;
                String str19 = null;
                String str20 = null;
                String str21 = null;
                u uVar = null;
                while (parcel.dataPosition() < g025) {
                    int readInt24 = parcel.readInt();
                    switch ((char) readInt24) {
                        case 1:
                            str15 = ys.d.B(readInt24, parcel);
                            break;
                        case 2:
                            str16 = ys.d.B(readInt24, parcel);
                            break;
                        case 3:
                            str17 = ys.d.B(readInt24, parcel);
                            break;
                        case 4:
                            str18 = ys.d.B(readInt24, parcel);
                            break;
                        case 5:
                            uri = (Uri) ys.d.A(parcel, readInt24, Uri.CREATOR);
                            break;
                        case 6:
                            str19 = ys.d.B(readInt24, parcel);
                            break;
                        case 7:
                            str20 = ys.d.B(readInt24, parcel);
                            break;
                        case '\b':
                            str21 = ys.d.B(readInt24, parcel);
                            break;
                        case '\t':
                            uVar = (u) ys.d.A(parcel, readInt24, u.CREATOR);
                            break;
                        default:
                            ys.d.e0(readInt24, parcel);
                            break;
                    }
                }
                ys.d.G(g025, parcel);
                return new se.g(str15, str16, str17, str18, uri, str19, str20, str21, uVar);
            default:
                int g026 = ys.d.g0(parcel);
                boolean z17 = false;
                while (parcel.dataPosition() < g026) {
                    int readInt25 = parcel.readInt();
                    if (((char) readInt25) != 1) {
                        ys.d.e0(readInt25, parcel);
                    } else {
                        z17 = ys.d.T(readInt25, parcel);
                    }
                }
                ys.d.G(g026, parcel);
                return new sf.a(z17);
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new f0[i5];
            case 1:
                return new e[i5];
            case 2:
                return new h0[i5];
            case 3:
                return new i0[i5];
            case 4:
                return new j0[i5];
            case 5:
                return new k0[i5];
            case 6:
                return new l0[i5];
            case 7:
                return new f[i5];
            case 8:
                return new AuthenticationExtensions[i5];
            case 9:
                return new g[i5];
            case 10:
                return new u0[i5];
            case 11:
                return new v0[i5];
            case 12:
                return new h[i5];
            case 13:
                return new i[i5];
            case 14:
                return new j[i5];
            case 15:
                return new l[i5];
            case 16:
                return new n[i5];
            case 17:
                return new w0[i5];
            case 18:
                return new x0[i5];
            case 19:
                return new y0[i5];
            case 20:
                return new q[i5];
            case 21:
                return new r[i5];
            case 22:
                return new se.e[i5];
            case 23:
                return new se.f[i5];
            case 24:
                return new se.a[i5];
            case 25:
                return new se.b[i5];
            case 26:
                return new se.c[i5];
            case 27:
                return new se.d[i5];
            case 28:
                return new se.g[i5];
            default:
                return new sf.a[i5];
        }
    }
}
