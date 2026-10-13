package vj;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.google.zxing.Result;
import java.util.Map;

/* loaded from: classes3.dex */
public final class e extends k {
    public static final int[] j = {0, 11, 13, 14, 19, 25, 28, 21, 22, 26};
    public static final int[] k = {1, 1, 1, 1, 1, 1};

    /* renamed from: l, reason: collision with root package name */
    public static final int[][] f19428l = {new int[]{56, 52, 50, 49, 44, 38, 35, 42, 41, 37}, new int[]{7, 11, 13, 14, 19, 25, 28, 21, 22, 26}};

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ int f19429h;

    /* renamed from: i, reason: collision with root package name */
    public final Object f19430i;

    public e(int i5) {
        this.f19429h = i5;
        switch (i5) {
            case 1:
                this.f19430i = new int[4];
                break;
            case 2:
                this.f19430i = new int[4];
                break;
            case 3:
                this.f19430i = new e(0);
                break;
            default:
                this.f19430i = new int[4];
                break;
        }
    }

    public static Result o(Result result) {
        String str = result.a;
        if (str.charAt(0) != '0') {
            throw jj.d.a();
        }
        Result result2 = new Result(str.substring(1), null, result.f6293c, jj.a.L);
        Map map = result.f6295e;
        if (map != null) {
            result2.a(map);
        }
        return result2;
    }

    @Override // vj.h, jj.i
    public Result a(e4.e eVar, Map map) {
        switch (this.f19429h) {
            case 3:
                return o(((e) this.f19430i).a(eVar, map));
            default:
                return super.a(eVar, map);
        }
    }

    @Override // vj.k, vj.h
    public Result b(int i5, nj.a aVar, Map map) {
        switch (this.f19429h) {
            case 3:
                return o(((e) this.f19430i).b(i5, aVar, map));
            default:
                return super.b(i5, aVar, map);
        }
    }

    @Override // vj.k
    public boolean g(String str) {
        switch (this.f19429h) {
            case 1:
                char[] cArr = new char[6];
                str.getChars(1, 7, cArr, 0);
                StringBuilder sb2 = new StringBuilder(12);
                sb2.append(str.charAt(0));
                char c6 = cArr[5];
                switch (c6) {
                    case '0':
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    case '2':
                        sb2.append(cArr, 0, 2);
                        sb2.append(c6);
                        sb2.append("0000");
                        sb2.append(cArr, 2, 3);
                        break;
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                        sb2.append(cArr, 0, 3);
                        sb2.append("00000");
                        sb2.append(cArr, 3, 2);
                        break;
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                        sb2.append(cArr, 0, 4);
                        sb2.append("00000");
                        sb2.append(cArr[4]);
                        break;
                    default:
                        sb2.append(cArr, 0, 5);
                        sb2.append("0000");
                        sb2.append(c6);
                        break;
                }
                if (str.length() >= 8) {
                    sb2.append(str.charAt(7));
                }
                return super.g(sb2.toString());
            default:
                return super.g(str);
        }
    }

    @Override // vj.k
    public int[] i(nj.a aVar, int i5) {
        switch (this.f19429h) {
            case 1:
                return k.l(aVar, i5, true, k, new int[6]);
            default:
                return super.i(aVar, i5);
        }
    }

    @Override // vj.k
    public final int j(nj.a aVar, int[] iArr, StringBuilder sb2) {
        int[][] iArr2;
        switch (this.f19429h) {
            case 0:
                int[] iArr3 = (int[]) this.f19430i;
                iArr3[0] = 0;
                iArr3[1] = 0;
                iArr3[2] = 0;
                iArr3[3] = 0;
                int i5 = aVar.f15509e;
                int i6 = iArr[1];
                int i10 = 0;
                for (int i11 = 0; i11 < 6 && i6 < i5; i11++) {
                    int h6 = k.h(aVar, iArr3, i6, k.f19443g);
                    sb2.append((char) ((h6 % 10) + 48));
                    for (int i12 : iArr3) {
                        i6 += i12;
                    }
                    if (h6 >= 10) {
                        i10 |= 1 << (5 - i11);
                    }
                }
                for (int i13 = 0; i13 < 10; i13++) {
                    if (i10 == j[i13]) {
                        sb2.insert(0, (char) (i13 + 48));
                        int i14 = k.l(aVar, i6, true, k.f19441e, new int[5])[1];
                        for (int i15 = 0; i15 < 6 && i14 < i5; i15++) {
                            sb2.append((char) (k.h(aVar, iArr3, i14, k.f19442f) + 48));
                            for (int i16 : iArr3) {
                                i14 += i16;
                            }
                        }
                        return i14;
                    }
                }
                throw jj.g.f12795i;
            case 1:
                int[] iArr4 = (int[]) this.f19430i;
                iArr4[0] = 0;
                iArr4[1] = 0;
                iArr4[2] = 0;
                iArr4[3] = 0;
                int i17 = aVar.f15509e;
                int i18 = iArr[1];
                int i19 = 0;
                for (int i20 = 0; i20 < 6 && i18 < i17; i20++) {
                    int h7 = k.h(aVar, iArr4, i18, k.f19443g);
                    sb2.append((char) ((h7 % 10) + 48));
                    for (int i21 : iArr4) {
                        i18 += i21;
                    }
                    if (h7 >= 10) {
                        i19 |= 1 << (5 - i20);
                    }
                }
                for (int i22 = 0; i22 <= 1; i22++) {
                    for (int i23 = 0; i23 < 10; i23++) {
                        if (i19 == f19428l[i22][i23]) {
                            sb2.insert(0, (char) (i22 + 48));
                            sb2.append((char) (i23 + 48));
                            return i18;
                        }
                    }
                }
                throw jj.g.f12795i;
            case 2:
                int[] iArr5 = (int[]) this.f19430i;
                iArr5[0] = 0;
                iArr5[1] = 0;
                iArr5[2] = 0;
                iArr5[3] = 0;
                int i24 = aVar.f15509e;
                int i25 = iArr[1];
                int i26 = 0;
                while (true) {
                    iArr2 = k.f19442f;
                    if (i26 < 4 && i25 < i24) {
                        sb2.append((char) (k.h(aVar, iArr5, i25, iArr2) + 48));
                        for (int i27 : iArr5) {
                            i25 += i27;
                        }
                        i26++;
                    }
                }
                int i28 = k.l(aVar, i25, true, k.f19441e, new int[5])[1];
                for (int i29 = 0; i29 < 4 && i28 < i24; i29++) {
                    sb2.append((char) (k.h(aVar, iArr5, i28, iArr2) + 48));
                    for (int i30 : iArr5) {
                        i28 += i30;
                    }
                }
                return i28;
            default:
                return ((e) this.f19430i).j(aVar, iArr, sb2);
        }
    }

    @Override // vj.k
    public Result k(int i5, nj.a aVar, int[] iArr, Map map) {
        switch (this.f19429h) {
            case 3:
                return o(((e) this.f19430i).k(i5, aVar, iArr, map));
            default:
                return super.k(i5, aVar, iArr, map);
        }
    }

    @Override // vj.k
    public final jj.a n() {
        switch (this.f19429h) {
            case 0:
                return jj.a.E;
            case 1:
                return jj.a.M;
            case 2:
                return jj.a.f12783y;
            default:
                return jj.a.L;
        }
    }
}
