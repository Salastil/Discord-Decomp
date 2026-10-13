package vj;

import com.discord.media.utils.DiscordVideoMediaSource;
import com.facebook.react.common.assets.ReactFontManager;
import com.facebook.react.views.image.ReactImageView;
import com.google.zxing.Result;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Map;
import jj.l;

/* loaded from: classes3.dex */
public abstract class k extends h {

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f19440d = {1, 1, 1};

    /* renamed from: e, reason: collision with root package name */
    public static final int[] f19441e = {1, 1, 1, 1, 1};

    /* renamed from: f, reason: collision with root package name */
    public static final int[][] f19442f;

    /* renamed from: g, reason: collision with root package name */
    public static final int[][] f19443g;
    public final StringBuilder a = new StringBuilder(20);

    /* renamed from: b, reason: collision with root package name */
    public final j f19444b = new j(0);

    /* renamed from: c, reason: collision with root package name */
    public final j f19445c = new j(1);

    static {
        int[][] iArr = {new int[]{3, 2, 1, 1}, new int[]{2, 2, 2, 1}, new int[]{2, 1, 2, 2}, new int[]{1, 4, 1, 1}, new int[]{1, 1, 3, 2}, new int[]{1, 2, 3, 1}, new int[]{1, 1, 1, 4}, new int[]{1, 3, 1, 2}, new int[]{1, 2, 1, 3}, new int[]{3, 1, 1, 2}};
        f19442f = iArr;
        int[][] iArr2 = new int[20][];
        f19443g = iArr2;
        System.arraycopy(iArr, 0, iArr2, 0, 10);
        for (int i5 = 10; i5 < 20; i5++) {
            int[] iArr3 = f19442f[i5 - 10];
            int[] iArr4 = new int[iArr3.length];
            for (int i6 = 0; i6 < iArr3.length; i6++) {
                iArr4[i6] = iArr3[(iArr3.length - i6) - 1];
            }
            f19443g[i5] = iArr4;
        }
    }

    public static int h(nj.a aVar, int[] iArr, int i5, int[][] iArr2) {
        h.e(i5, aVar, iArr);
        int length = iArr2.length;
        float f2 = 0.48f;
        int i6 = -1;
        for (int i10 = 0; i10 < length; i10++) {
            float d6 = h.d(iArr, iArr2[i10], 0.7f);
            if (d6 < f2) {
                i6 = i10;
                f2 = d6;
            }
        }
        if (i6 >= 0) {
            return i6;
        }
        throw jj.g.f12795i;
    }

    public static int[] l(nj.a aVar, int i5, boolean z5, int[] iArr, int[] iArr2) {
        int i6 = aVar.f15509e;
        int c6 = z5 ? aVar.c(i5) : aVar.b(i5);
        int length = iArr.length;
        boolean z6 = z5;
        int i10 = 0;
        int i11 = c6;
        while (c6 < i6) {
            if (aVar.a(c6) != z6) {
                iArr2[i10] = iArr2[i10] + 1;
            } else {
                if (i10 != length - 1) {
                    i10++;
                } else {
                    if (h.d(iArr2, iArr, 0.7f) < 0.48f) {
                        return new int[]{i11, c6};
                    }
                    i11 += iArr2[0] + iArr2[1];
                    int i12 = i10 - 1;
                    System.arraycopy(iArr2, 2, iArr2, 0, i12);
                    iArr2[i12] = 0;
                    iArr2[i10] = 0;
                    i10--;
                }
                iArr2[i10] = 1;
                z6 = !z6;
            }
            c6++;
        }
        throw jj.g.f12795i;
    }

    public static int[] m(nj.a aVar) {
        int[] iArr = new int[3];
        int[] iArr2 = null;
        boolean z5 = false;
        int i5 = 0;
        while (!z5) {
            Arrays.fill(iArr, 0, 3, 0);
            iArr2 = l(aVar, i5, false, f19440d, iArr);
            int i6 = iArr2[0];
            int i10 = iArr2[1];
            int i11 = i6 - (i10 - i6);
            if (i11 >= 0) {
                z5 = aVar.d(i11, i6);
            }
            i5 = i10;
        }
        return iArr2;
    }

    @Override // vj.h
    public Result b(int i5, nj.a aVar, Map map) {
        return k(i5, aVar, m(aVar), map);
    }

    public boolean g(String str) {
        int length = str.length();
        if (length != 0) {
            int i5 = length - 1;
            int digit = Character.digit(str.charAt(i5), 10);
            CharSequence subSequence = str.subSequence(0, i5);
            int length2 = subSequence.length();
            int i6 = 0;
            for (int i10 = length2 - 1; i10 >= 0; i10 -= 2) {
                int charAt = subSequence.charAt(i10) - '0';
                if (charAt < 0 || charAt > 9) {
                    throw jj.d.a();
                }
                i6 += charAt;
            }
            int i11 = i6 * 3;
            for (int i12 = length2 - 2; i12 >= 0; i12 -= 2) {
                int charAt2 = subSequence.charAt(i12) - '0';
                if (charAt2 < 0 || charAt2 > 9) {
                    throw jj.d.a();
                }
                i11 += charAt2;
            }
            if ((1000 - i11) % 10 == digit) {
                return true;
            }
        }
        return false;
    }

    public int[] i(nj.a aVar, int i5) {
        return l(aVar, i5, false, f19440d, new int[3]);
    }

    public abstract int j(nj.a aVar, int[] iArr, StringBuilder sb2);

    public Result k(int i5, nj.a aVar, int[] iArr, Map map) {
        int i6;
        if (map != null && map.get(jj.c.F) != null) {
            throw new ClassCastException();
        }
        StringBuilder sb2 = this.a;
        sb2.setLength(0);
        int[] i10 = i(aVar, j(aVar, iArr, sb2));
        int i11 = i10[1];
        int i12 = (i11 - i10[0]) + i11;
        if (i12 >= aVar.f15509e || !aVar.d(i11, i12)) {
            throw jj.g.f12795i;
        }
        String sb3 = sb2.toString();
        if (sb3.length() < 8) {
            throw jj.d.a();
        }
        if (!g(sb3)) {
            throw jj.b.a();
        }
        jj.a n6 = n();
        float f2 = i5;
        String str = null;
        Result result = new Result(sb3, null, new l[]{new l((iArr[1] + iArr[0]) / 2.0f, f2), new l((i10[1] + i10[0]) / 2.0f, f2)}, n6);
        try {
            Result b10 = this.f19444b.b(i5, i10[1], aVar);
            result.b(jj.k.f12809y, b10.a);
            result.a(b10.f6295e);
            l[] lVarArr = b10.f6293c;
            l[] lVarArr2 = result.f6293c;
            if (lVarArr2 == null) {
                result.f6293c = lVarArr;
            } else if (lVarArr != null && lVarArr.length > 0) {
                l[] lVarArr3 = new l[lVarArr2.length + lVarArr.length];
                System.arraycopy(lVarArr2, 0, lVarArr3, 0, lVarArr2.length);
                System.arraycopy(lVarArr, 0, lVarArr3, lVarArr2.length, lVarArr.length);
                result.f6293c = lVarArr3;
            }
            i6 = b10.a.length();
        } catch (jj.j unused) {
            i6 = 0;
        }
        int[] iArr2 = map == null ? null : (int[]) map.get(jj.c.G);
        if (iArr2 != null) {
            for (int i13 : iArr2) {
                if (i6 != i13) {
                }
            }
            throw jj.g.f12795i;
        }
        if (n6 == jj.a.E || n6 == jj.a.L) {
            j jVar = this.f19445c;
            synchronized (jVar) {
                if (((ArrayList) jVar.a).isEmpty()) {
                    jVar.a(new int[]{0, 19}, "US/CA");
                    jVar.a(new int[]{30, 39}, "US");
                    jVar.a(new int[]{60, 139}, "US/CA");
                    jVar.a(new int[]{ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS, 379}, "FR");
                    jVar.a(new int[]{380}, "BG");
                    jVar.a(new int[]{383}, "SI");
                    jVar.a(new int[]{385}, "HR");
                    jVar.a(new int[]{387}, "BA");
                    jVar.a(new int[]{ReactFontManager.TypefaceStyle.NORMAL, 440}, "DE");
                    jVar.a(new int[]{450, 459}, "JP");
                    jVar.a(new int[]{460, 469}, "RU");
                    jVar.a(new int[]{471}, "TW");
                    jVar.a(new int[]{474}, "EE");
                    jVar.a(new int[]{475}, "LV");
                    jVar.a(new int[]{476}, "AZ");
                    jVar.a(new int[]{477}, "LT");
                    jVar.a(new int[]{478}, "UZ");
                    jVar.a(new int[]{479}, "LK");
                    jVar.a(new int[]{DiscordVideoMediaSource.DEFAULT_HEIGHT}, "PH");
                    jVar.a(new int[]{481}, "BY");
                    jVar.a(new int[]{482}, "UA");
                    jVar.a(new int[]{484}, "MD");
                    jVar.a(new int[]{485}, "AM");
                    jVar.a(new int[]{486}, "GE");
                    jVar.a(new int[]{487}, "KZ");
                    jVar.a(new int[]{489}, "HK");
                    jVar.a(new int[]{490, 499}, "JP");
                    jVar.a(new int[]{500, 509}, "GB");
                    jVar.a(new int[]{520}, "GR");
                    jVar.a(new int[]{528}, "LB");
                    jVar.a(new int[]{529}, "CY");
                    jVar.a(new int[]{531}, "MK");
                    jVar.a(new int[]{535}, "MT");
                    jVar.a(new int[]{539}, "IE");
                    jVar.a(new int[]{540, 549}, "BE/LU");
                    jVar.a(new int[]{560}, "PT");
                    jVar.a(new int[]{569}, "IS");
                    jVar.a(new int[]{570, 579}, "DK");
                    jVar.a(new int[]{590}, "PL");
                    jVar.a(new int[]{594}, "RO");
                    jVar.a(new int[]{599}, "HU");
                    jVar.a(new int[]{600, 601}, "ZA");
                    jVar.a(new int[]{603}, "GH");
                    jVar.a(new int[]{608}, "BH");
                    jVar.a(new int[]{609}, "MU");
                    jVar.a(new int[]{611}, "MA");
                    jVar.a(new int[]{613}, "DZ");
                    jVar.a(new int[]{616}, "KE");
                    jVar.a(new int[]{618}, "CI");
                    jVar.a(new int[]{619}, "TN");
                    jVar.a(new int[]{621}, "SY");
                    jVar.a(new int[]{622}, "EG");
                    jVar.a(new int[]{624}, "LY");
                    jVar.a(new int[]{625}, "JO");
                    jVar.a(new int[]{626}, "IR");
                    jVar.a(new int[]{627}, "KW");
                    jVar.a(new int[]{628}, "SA");
                    jVar.a(new int[]{629}, "AE");
                    jVar.a(new int[]{DiscordVideoMediaSource.DEFAULT_WIDTH, 649}, "FI");
                    jVar.a(new int[]{690, 695}, "CN");
                    jVar.a(new int[]{ReactFontManager.TypefaceStyle.BOLD, 709}, "NO");
                    jVar.a(new int[]{729}, "IL");
                    jVar.a(new int[]{730, 739}, "SE");
                    jVar.a(new int[]{740}, "GT");
                    jVar.a(new int[]{741}, "SV");
                    jVar.a(new int[]{742}, "HN");
                    jVar.a(new int[]{743}, "NI");
                    jVar.a(new int[]{744}, "CR");
                    jVar.a(new int[]{745}, "PA");
                    jVar.a(new int[]{746}, "DO");
                    jVar.a(new int[]{750}, "MX");
                    jVar.a(new int[]{754, 755}, "CA");
                    jVar.a(new int[]{759}, "VE");
                    jVar.a(new int[]{760, 769}, "CH");
                    jVar.a(new int[]{770}, "CO");
                    jVar.a(new int[]{773}, "UY");
                    jVar.a(new int[]{775}, "PE");
                    jVar.a(new int[]{777}, "BO");
                    jVar.a(new int[]{779}, "AR");
                    jVar.a(new int[]{780}, "CL");
                    jVar.a(new int[]{784}, "PY");
                    jVar.a(new int[]{785}, "PE");
                    jVar.a(new int[]{786}, "EC");
                    jVar.a(new int[]{789, 790}, "BR");
                    jVar.a(new int[]{800, 839}, "IT");
                    jVar.a(new int[]{840, 849}, "ES");
                    jVar.a(new int[]{850}, "CU");
                    jVar.a(new int[]{858}, "SK");
                    jVar.a(new int[]{859}, "CZ");
                    jVar.a(new int[]{860}, "YU");
                    jVar.a(new int[]{865}, "MN");
                    jVar.a(new int[]{867}, "KP");
                    jVar.a(new int[]{868, 869}, "TR");
                    jVar.a(new int[]{870, 879}, "NL");
                    jVar.a(new int[]{880}, "KR");
                    jVar.a(new int[]{885}, "TH");
                    jVar.a(new int[]{888}, "SG");
                    jVar.a(new int[]{890}, "IN");
                    jVar.a(new int[]{893}, "VN");
                    jVar.a(new int[]{896}, "PK");
                    jVar.a(new int[]{899}, "ID");
                    jVar.a(new int[]{900, 919}, "AT");
                    jVar.a(new int[]{930, 939}, "AU");
                    jVar.a(new int[]{940, 949}, "AZ");
                    jVar.a(new int[]{955}, "MY");
                    jVar.a(new int[]{958}, "MO");
                }
            }
            int parseInt = Integer.parseInt(sb3.substring(0, 3));
            int size = ((ArrayList) jVar.a).size();
            int i14 = 0;
            while (true) {
                if (i14 >= size) {
                    break;
                }
                int[] iArr3 = (int[]) ((ArrayList) jVar.a).get(i14);
                int i15 = iArr3[0];
                if (parseInt < i15) {
                    break;
                }
                if (iArr3.length != 1) {
                    i15 = iArr3[1];
                }
                if (parseInt <= i15) {
                    str = (String) ((ArrayList) jVar.f19439b).get(i14);
                    break;
                }
                i14++;
            }
            if (str != null) {
                result.b(jj.k.f12808x, str);
            }
        }
        return result;
    }

    public abstract jj.a n();
}
