package ad;

import android.util.SparseArray;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class p {
    public final qc.v a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f427b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f428c;

    /* renamed from: f, reason: collision with root package name */
    public final ke.v f431f;

    /* renamed from: g, reason: collision with root package name */
    public byte[] f432g;

    /* renamed from: h, reason: collision with root package name */
    public int f433h;

    /* renamed from: i, reason: collision with root package name */
    public int f434i;
    public long j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public long f435l;

    /* renamed from: o, reason: collision with root package name */
    public boolean f438o;

    /* renamed from: p, reason: collision with root package name */
    public long f439p;

    /* renamed from: q, reason: collision with root package name */
    public long f440q;

    /* renamed from: r, reason: collision with root package name */
    public boolean f441r;

    /* renamed from: d, reason: collision with root package name */
    public final SparseArray f429d = new SparseArray();

    /* renamed from: e, reason: collision with root package name */
    public final SparseArray f430e = new SparseArray();

    /* renamed from: m, reason: collision with root package name */
    public o f436m = new o();

    /* renamed from: n, reason: collision with root package name */
    public o f437n = new o();

    public p(qc.v vVar, boolean z5, boolean z6) {
        this.a = vVar;
        this.f427b = z5;
        this.f428c = z6;
        byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];
        this.f432g = bArr;
        this.f431f = new ke.v(bArr, 0, 0);
        this.k = false;
        this.f438o = false;
        o oVar = this.f437n;
        oVar.f414b = false;
        oVar.a = false;
    }
}
