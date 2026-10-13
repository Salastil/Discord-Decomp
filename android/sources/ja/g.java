package ja;

import android.content.ContentResolver;
import android.content.Context;
import android.content.res.AssetManager;
import android.content.res.Resources;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.core.DefaultExecutorSupplier;
import com.facebook.imagepipeline.core.DownsampleMode;
import com.facebook.imagepipeline.producers.c1;
import com.facebook.imagepipeline.producers.z0;
import ha.l;
import qa.n;

/* loaded from: classes3.dex */
public final class g {
    public final ContentResolver a;

    /* renamed from: b, reason: collision with root package name */
    public final Resources f12454b;

    /* renamed from: c, reason: collision with root package name */
    public final AssetManager f12455c;

    /* renamed from: d, reason: collision with root package name */
    public final n f12456d;

    /* renamed from: e, reason: collision with root package name */
    public final ma.b f12457e;

    /* renamed from: f, reason: collision with root package name */
    public final gj.c f12458f;

    /* renamed from: g, reason: collision with root package name */
    public final DownsampleMode f12459g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f12460h;

    /* renamed from: i, reason: collision with root package name */
    public final e f12461i;
    public final e4.c j;
    public final Supplier k;

    /* renamed from: l, reason: collision with root package name */
    public final ha.i f12462l;

    /* renamed from: m, reason: collision with root package name */
    public final ha.i f12463m;

    /* renamed from: n, reason: collision with root package name */
    public final DefaultCacheKeyFactory f12464n;

    /* renamed from: o, reason: collision with root package name */
    public final PlatformBitmapFactory f12465o;

    /* renamed from: p, reason: collision with root package name */
    public final l f12466p;

    /* renamed from: q, reason: collision with root package name */
    public final int f12467q;

    public g(Context context, n nVar, p9.c cVar, gj.c cVar2, DownsampleMode downsampleMode, boolean z5, e eVar, e4.c cVar3, e4.c cVar4, e4.c cVar5, Supplier supplier, DefaultCacheKeyFactory defaultCacheKeyFactory, PlatformBitmapFactory platformBitmapFactory, l lVar, int i5) {
        this.a = context.getApplicationContext().getContentResolver();
        this.f12454b = context.getApplicationContext().getResources();
        this.f12455c = context.getApplicationContext().getAssets();
        this.f12456d = nVar;
        this.f12457e = cVar;
        this.f12458f = cVar2;
        this.f12459g = downsampleMode;
        this.f12460h = z5;
        this.f12461i = eVar;
        this.j = cVar3;
        this.f12463m = cVar4;
        this.f12462l = cVar5;
        this.k = supplier;
        this.f12464n = defaultCacheKeyFactory;
        this.f12465o = platformBitmapFactory;
        new j8.b(i5);
        new j8.b(i5);
        this.f12467q = RecyclerView.ItemAnimator.FLAG_MOVED;
        this.f12466p = lVar;
    }

    public final c1 a(z0 z0Var, boolean z5, ua.b bVar) {
        return new c1(((DefaultExecutorSupplier) this.f12461i).f4590c, this.j, z0Var, z5, bVar);
    }
}
