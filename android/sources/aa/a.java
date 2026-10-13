package aa;

import e4.f;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: b, reason: collision with root package name */
    public static final byte[] f247b = {-1, -40, -1};

    /* renamed from: c, reason: collision with root package name */
    public static final int f248c = 3;

    /* renamed from: d, reason: collision with root package name */
    public static final byte[] f249d = {-119, 80, 78, 71, 13, 10, 26, 10};

    /* renamed from: e, reason: collision with root package name */
    public static final int f250e = 8;

    /* renamed from: f, reason: collision with root package name */
    public static final byte[] f251f = f.c("GIF87a");

    /* renamed from: g, reason: collision with root package name */
    public static final byte[] f252g = f.c("GIF89a");

    /* renamed from: h, reason: collision with root package name */
    public static final byte[] f253h;

    /* renamed from: i, reason: collision with root package name */
    public static final int f254i;
    public static final byte[] j;
    public static final int k;

    /* renamed from: l, reason: collision with root package name */
    public static final byte[] f255l;

    /* renamed from: m, reason: collision with root package name */
    public static final byte[][] f256m;

    /* renamed from: n, reason: collision with root package name */
    public static final byte[] f257n;

    /* renamed from: o, reason: collision with root package name */
    public static final byte[] f258o;

    /* renamed from: p, reason: collision with root package name */
    public static final int f259p;

    /* renamed from: q, reason: collision with root package name */
    public static final byte[] f260q;

    /* renamed from: r, reason: collision with root package name */
    public static final byte[] f261r;

    /* renamed from: s, reason: collision with root package name */
    public static final byte[] f262s;
    public final int a;

    static {
        byte[] c6 = f.c("BM");
        f253h = c6;
        f254i = c6.length;
        j = new byte[]{0, 0, 1, 0};
        k = 4;
        f255l = f.c("ftyp");
        f256m = new byte[][]{f.c("heic"), f.c("heix"), f.c("hevc"), f.c("hevx"), f.c("mif1"), f.c("msf1")};
        f257n = new byte[]{73, 73, 42, 0};
        f258o = new byte[]{77, 77, 0, 42};
        f259p = 4;
        f260q = new byte[]{3, 0, 8, 0};
        f261r = f.c("ftyp");
        f262s = f.c("avif");
    }

    public a() {
        Integer num;
        Integer[] numArr = {21, 20, Integer.valueOf(f248c), Integer.valueOf(f250e), 6, Integer.valueOf(f254i), Integer.valueOf(k), 12, 4, 12};
        Intrinsics.checkNotNullParameter(numArr, "<this>");
        if (numArr.length == 0) {
            num = null;
        } else {
            Integer num2 = numArr[0];
            Intrinsics.checkNotNullParameter(numArr, "<this>");
            int i5 = 1;
            int length = numArr.length - 1;
            if (1 <= length) {
                while (true) {
                    Integer num3 = numArr[i5];
                    num2 = num2.compareTo(num3) < 0 ? num3 : num2;
                    if (i5 == length) {
                        break;
                    } else {
                        i5++;
                    }
                }
            }
            num = num2;
        }
        if (num == null) {
            throw new IllegalStateException("Required value was null.");
        }
        this.a = num.intValue();
    }
}
