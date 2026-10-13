package pj;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import e4.e;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: h, reason: collision with root package name */
    public static final a f16398h = new a(4201, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, 1);

    /* renamed from: i, reason: collision with root package name */
    public static final a f16399i = new a(1033, IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET, 1);
    public static final a j;
    public static final a k;

    /* renamed from: l, reason: collision with root package name */
    public static final a f16400l;

    /* renamed from: m, reason: collision with root package name */
    public static final a f16401m;

    /* renamed from: n, reason: collision with root package name */
    public static final a f16402n;

    /* renamed from: o, reason: collision with root package name */
    public static final a f16403o;
    public final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f16404b;

    /* renamed from: c, reason: collision with root package name */
    public final e f16405c;

    /* renamed from: d, reason: collision with root package name */
    public final e f16406d;

    /* renamed from: e, reason: collision with root package name */
    public final int f16407e;

    /* renamed from: f, reason: collision with root package name */
    public final int f16408f;

    /* renamed from: g, reason: collision with root package name */
    public final int f16409g;

    static {
        a aVar = new a(67, 64, 1);
        j = aVar;
        k = new a(19, 16, 1);
        f16400l = new a(285, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER, 0);
        a aVar2 = new a(301, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER, 1);
        f16401m = aVar2;
        f16402n = aVar2;
        f16403o = aVar;
    }

    public a(int i5, int i6, int i10) {
        this.f16408f = i5;
        this.f16407e = i6;
        this.f16409g = i10;
        this.a = new int[i6];
        this.f16404b = new int[i6];
        int i11 = 1;
        for (int i12 = 0; i12 < i6; i12++) {
            this.a[i12] = i11;
            i11 <<= 1;
            if (i11 >= i6) {
                i11 = (i11 ^ i5) & (i6 - 1);
            }
        }
        for (int i13 = 0; i13 < i6 - 1; i13++) {
            this.f16404b[this.a[i13]] = i13;
        }
        this.f16405c = new e(this, new int[]{0});
        this.f16406d = new e(this, new int[]{1});
    }

    public final int a(int i5) {
        if (i5 == 0) {
            throw new ArithmeticException();
        }
        return this.a[(this.f16407e - this.f16404b[i5]) - 1];
    }

    public final int b(int i5, int i6) {
        if (i5 == 0 || i6 == 0) {
            return 0;
        }
        int[] iArr = this.f16404b;
        return this.a[(iArr[i5] + iArr[i6]) % (this.f16407e - 1)];
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("GF(0x");
        sb2.append(Integer.toHexString(this.f16408f));
        sb2.append(',');
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f16407e, ')');
    }
}
