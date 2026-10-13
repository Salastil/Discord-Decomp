package g9;

import a3.h;
import android.graphics.Rect;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.Drawable;
import android.os.Handler;
import android.os.Looper;
import android.view.MotionEvent;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.internal.Fn;
import com.facebook.common.references.CloseableReference;
import com.facebook.datasource.DataSource;
import com.facebook.drawee.controller.ControllerListener;
import com.facebook.drawee.drawable.m;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.drawee.interfaces.DraweeHierarchy;
import com.facebook.imagepipeline.request.ImageRequest;
import java.util.ArrayList;
import java.util.Map;
import java.util.concurrent.Executor;
import k2.r;
import kotlin.jvm.internal.Intrinsics;
import oa.i;
import oa.j;

/* loaded from: classes3.dex */
public abstract class c implements DraweeController, f9.a {

    /* renamed from: r, reason: collision with root package name */
    public static final Map f9121r = o8.e.a("component_tag", "drawee");

    /* renamed from: s, reason: collision with root package name */
    public static final Map f9122s = o8.e.b("origin", "memory_bitmap", "origin_sub", "shortcut");

    /* renamed from: t, reason: collision with root package name */
    public static final Class f9123t = c.class;
    public final f9.d a;

    /* renamed from: b, reason: collision with root package name */
    public final f9.b f9124b;

    /* renamed from: c, reason: collision with root package name */
    public final Executor f9125c;

    /* renamed from: d, reason: collision with root package name */
    public ControllerListener f9126d;

    /* renamed from: e, reason: collision with root package name */
    public final x9.a f9127e;

    /* renamed from: f, reason: collision with root package name */
    public GenericDraweeHierarchy f9128f;

    /* renamed from: g, reason: collision with root package name */
    public h9.a f9129g;

    /* renamed from: h, reason: collision with root package name */
    public String f9130h;

    /* renamed from: i, reason: collision with root package name */
    public Object f9131i;
    public boolean j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f9132l;

    /* renamed from: m, reason: collision with root package name */
    public String f9133m;

    /* renamed from: n, reason: collision with root package name */
    public DataSource f9134n;

    /* renamed from: o, reason: collision with root package name */
    public Object f9135o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f9136p;

    /* renamed from: q, reason: collision with root package name */
    public Drawable f9137q;

    public c(f9.b bVar, Executor executor) {
        this.a = f9.d.f8485c ? new f9.d() : f9.d.f8484b;
        this.f9127e = new x9.a();
        this.f9136p = true;
        this.f9124b = bVar;
        this.f9125c = executor;
        f(null, null);
    }

    public final void a(ControllerListener controllerListener) {
        controllerListener.getClass();
        ControllerListener controllerListener2 = this.f9126d;
        if (controllerListener2 instanceof b) {
            ((b) controllerListener2).a(controllerListener);
            return;
        }
        if (controllerListener2 == null) {
            this.f9126d = controllerListener;
            return;
        }
        ta.a.D();
        b bVar = new b();
        bVar.a(controllerListener2);
        bVar.a(controllerListener);
        ta.a.D();
        this.f9126d = bVar;
    }

    public abstract Drawable b(Object obj);

    public final ControllerListener c() {
        ControllerListener controllerListener = this.f9126d;
        return controllerListener == null ? f.getNoOpListener() : controllerListener;
    }

    public abstract i d(Object obj);

    public final GenericDraweeHierarchy e() {
        GenericDraweeHierarchy genericDraweeHierarchy = this.f9128f;
        if (genericDraweeHierarchy != null) {
            return genericDraweeHierarchy;
        }
        throw new IllegalStateException("mSettableDraweeHierarchy is null; Caller context: " + this.f9131i);
    }

    public final synchronized void f(Object obj, String str) {
        f9.b bVar;
        try {
            ta.a.D();
            this.a.a(f9.c.f8482x);
            if (!this.f9136p && (bVar = this.f9124b) != null) {
                bVar.b(this);
            }
            this.j = false;
            n();
            ControllerListener controllerListener = this.f9126d;
            if (controllerListener instanceof b) {
                b bVar2 = (b) controllerListener;
                synchronized (bVar2) {
                    bVar2.f9144d.clear();
                }
            } else {
                this.f9126d = null;
            }
            GenericDraweeHierarchy genericDraweeHierarchy = this.f9128f;
            if (genericDraweeHierarchy != null) {
                genericDraweeHierarchy.f4481f.setDrawable(genericDraweeHierarchy.a);
                genericDraweeHierarchy.i();
                j9.a aVar = this.f9128f.f4479d;
                aVar.f12429d = null;
                aVar.invalidateSelf();
                this.f9128f = null;
            }
            this.f9129g = null;
            if (p8.a.a.isLoggable(2)) {
                p8.a.p(f9123t, "controller %x %s -> %s: initialize", Integer.valueOf(System.identityHashCode(this)), this.f9130h, str);
            }
            this.f9130h = str;
            this.f9131i = obj;
            ta.a.D();
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final boolean g(String str, DataSource dataSource) {
        if (dataSource == null && this.f9134n == null) {
            return true;
        }
        return str.equals(this.f9130h) && dataSource == this.f9134n && this.k;
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public final Animatable getAnimatable() {
        Object obj = this.f9137q;
        if (obj instanceof Animatable) {
            return (Animatable) obj;
        }
        return null;
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public final DraweeHierarchy getHierarchy() {
        return this.f9128f;
    }

    public final void h(String str, Throwable th2) {
        if (p8.a.a.isLoggable(2)) {
            Integer valueOf = Integer.valueOf(System.identityHashCode(this));
            String str2 = this.f9130h;
            if (p8.a.a.isLoggable(2)) {
                p8.a.a.v(f9123t.getSimpleName(), String.format(null, "controller %x %s: %s: failure: %s", valueOf, str2, str, th2));
            }
        }
    }

    public final void i(Object obj, String str) {
        if (p8.a.a.isLoggable(2)) {
            Integer valueOf = Integer.valueOf(System.identityHashCode(this));
            String str2 = this.f9130h;
            String simpleName = obj != null ? obj.getClass().getSimpleName() : "<null>";
            CloseableReference closeableReference = (CloseableReference) obj;
            Object[] objArr = {valueOf, str2, str, simpleName, Integer.valueOf((closeableReference == null || !closeableReference.r()) ? 0 : System.identityHashCode(closeableReference.f4409e.a()))};
            if (p8.a.a.isLoggable(2)) {
                p8.a.a.v(f9123t.getSimpleName(), String.format(null, "controller %x %s: %s: image: %s %x", objArr));
            }
        }
    }

    public final l1.c j() {
        GenericDraweeHierarchy genericDraweeHierarchy = this.f9128f;
        if (genericDraweeHierarchy != null) {
            String.valueOf(genericDraweeHierarchy.f());
            if (genericDraweeHierarchy.g(2) instanceof m) {
                genericDraweeHierarchy.h(2);
            }
        }
        GenericDraweeHierarchy genericDraweeHierarchy2 = this.f9128f;
        Rect bounds = genericDraweeHierarchy2 == null ? null : genericDraweeHierarchy2.f4479d.getBounds();
        Object obj = this.f9131i;
        Map componentAttribution = f9121r;
        Intrinsics.checkNotNullParameter(componentAttribution, "componentAttribution");
        Map shortcutAttribution = f9122s;
        Intrinsics.checkNotNullParameter(shortcutAttribution, "shortcutAttribution");
        l1.c cVar = new l1.c();
        if (bounds != null) {
            bounds.width();
            bounds.height();
        }
        cVar.a = obj;
        return cVar;
    }

    public final void k(String str, DataSource dataSource, Throwable th2, boolean z5) {
        ta.a.D();
        if (!g(str, dataSource)) {
            h("ignore_old_datasource @ onFailure", th2);
            dataSource.close();
            ta.a.D();
            return;
        }
        this.a.a(z5 ? f9.c.J : f9.c.K);
        x9.a aVar = this.f9127e;
        if (z5) {
            h("final_failed @ onFailure", th2);
            this.f9134n = null;
            this.f9132l = true;
            GenericDraweeHierarchy genericDraweeHierarchy = this.f9128f;
            if (genericDraweeHierarchy != null) {
                com.facebook.drawee.drawable.d dVar = genericDraweeHierarchy.f4480e;
                dVar.O++;
                genericDraweeHierarchy.d();
                if (dVar.c(5) != null) {
                    genericDraweeHierarchy.c(5);
                } else {
                    genericDraweeHierarchy.c(1);
                }
                dVar.a();
            }
            l1.c j = j();
            c().onFailure(this.f9130h, th2);
            aVar.a(this.f9130h, th2, j);
        } else {
            h("intermediate_failed @ onFailure", th2);
            c().onIntermediateImageFailed(this.f9130h, th2);
            aVar.c(this.f9130h);
        }
        ta.a.D();
    }

    public final void l(String str, DataSource dataSource, Object obj, float f2, boolean z5, boolean z6, boolean z7) {
        try {
            ta.a.D();
            if (!g(str, dataSource)) {
                i(obj, "ignore_old_datasource @ onNewResult");
                CloseableReference.l((CloseableReference) obj);
                dataSource.close();
                ta.a.D();
                return;
            }
            this.a.a(z5 ? f9.c.H : f9.c.I);
            try {
                Drawable b10 = b(obj);
                Object obj2 = this.f9135o;
                Object obj3 = this.f9137q;
                this.f9135o = obj;
                this.f9137q = b10;
                x9.a aVar = this.f9127e;
                try {
                    if (z5) {
                        i(obj, "set_final_result @ onNewResult");
                        this.f9134n = null;
                        e().m(b10, 1.0f, z6);
                        i d6 = d(obj);
                        c().onFinalImageSet(str, d6, getAnimatable());
                        aVar.b(str, d6, j());
                    } else if (z7) {
                        i(obj, "set_temporary_result @ onNewResult");
                        e().m(b10, 1.0f, z6);
                        i d7 = d(obj);
                        c().onFinalImageSet(str, d7, getAnimatable());
                        aVar.b(str, d7, j());
                    } else {
                        i(obj, "set_intermediate_result @ onNewResult");
                        e().m(b10, f2, z6);
                        i d8 = d(obj);
                        c().onIntermediateImageSet(str, d8);
                        aVar.d(str, d8);
                    }
                    if (obj3 != null && obj3 != b10 && (obj3 instanceof b9.a)) {
                        ((b9.a) obj3).a();
                    }
                    if (obj2 != null && obj2 != obj) {
                        i(obj2, "release_previous_result @ onNewResult");
                        CloseableReference.l((CloseableReference) obj2);
                    }
                    ta.a.D();
                } catch (Throwable th2) {
                    if (obj3 != null && obj3 != b10 && (obj3 instanceof b9.a)) {
                        ((b9.a) obj3).a();
                    }
                    if (obj2 != null && obj2 != obj) {
                        i(obj2, "release_previous_result @ onNewResult");
                        CloseableReference.l((CloseableReference) obj2);
                    }
                    throw th2;
                }
            } catch (Exception e9) {
                i(obj, "drawable_failed @ onNewResult");
                CloseableReference.l((CloseableReference) obj);
                k(str, dataSource, e9, z5);
                ta.a.D();
            }
        } catch (Throwable th3) {
            ta.a.D();
            throw th3;
        }
    }

    public final void m() {
        this.a.a(f9.c.F);
        GenericDraweeHierarchy genericDraweeHierarchy = this.f9128f;
        if (genericDraweeHierarchy != null) {
            genericDraweeHierarchy.f4481f.setDrawable(genericDraweeHierarchy.a);
            genericDraweeHierarchy.i();
        }
        n();
    }

    public final void n() {
        boolean z5 = this.k;
        this.k = false;
        this.f9132l = false;
        DataSource dataSource = this.f9134n;
        if (dataSource != null) {
            dataSource.close();
            this.f9134n = null;
        }
        Object obj = this.f9137q;
        if (obj != null && (obj instanceof b9.a)) {
            ((b9.a) obj).a();
        }
        if (this.f9133m != null) {
            this.f9133m = null;
        }
        this.f9137q = null;
        Object obj2 = this.f9135o;
        if (obj2 != null) {
            d(obj2);
            i(this.f9135o, "release");
            CloseableReference.l((CloseableReference) this.f9135o);
            this.f9135o = null;
        }
        if (z5) {
            c().onRelease(this.f9130h);
            this.f9127e.e(this.f9130h, j());
        }
    }

    public final void o(DataSource dataSource, i iVar) {
        c().onSubmit(this.f9130h, this.f9131i);
        String str = this.f9130h;
        Object obj = this.f9131i;
        d9.b bVar = (d9.b) this;
        ImageRequest imageRequest = bVar.f7453z;
        ImageRequest imageRequest2 = bVar.A;
        Fn requestToUri = ImageRequest.REQUEST_TO_URI_FN;
        Intrinsics.checkNotNullParameter(requestToUri, "requestToUri");
        if ((imageRequest != null ? requestToUri.apply(imageRequest) : null) == null && imageRequest2 != null) {
            requestToUri.apply(imageRequest2);
        }
        this.f9127e.f(str, obj, j());
    }

    /* JADX WARN: Finally extract failed */
    /* JADX WARN: Removed duplicated region for block: B:26:0x007b  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00b2  */
    @Override // com.facebook.drawee.interfaces.DraweeController
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onAttach() {
        CloseableReference closeableReference;
        CacheKey cacheKey;
        ta.a.D();
        if (p8.a.a.isLoggable(2)) {
            p8.a.p(f9123t, "controller %x %s: onAttach: %s", Integer.valueOf(System.identityHashCode(this)), this.f9130h, this.k ? "request already submitted" : "request needs submit");
        }
        this.a.a(f9.c.f8483y);
        this.f9128f.getClass();
        this.f9124b.b(this);
        this.j = true;
        if (!this.k) {
            ta.a.D();
            d9.b bVar = (d9.b) this;
            ta.a.D();
            try {
                ha.i iVar = bVar.f7449v;
                if (iVar != null && (cacheKey = bVar.f7450w) != null) {
                    CloseableReference closeableReference2 = iVar.get(cacheKey);
                    if (closeableReference2 == null || ((j) ((oa.c) closeableReference2.q()).G()).f15816c) {
                        ta.a.D();
                        closeableReference = closeableReference2;
                        if (closeableReference == null) {
                            ta.a.D();
                            this.f9134n = null;
                            this.k = true;
                            this.f9132l = false;
                            this.a.a(f9.c.P);
                            o(this.f9134n, d(closeableReference));
                            synchronized (bVar) {
                                try {
                                } catch (Throwable th2) {
                                    th = th2;
                                    while (true) {
                                        try {
                                            throw th;
                                        } catch (Throwable th3) {
                                            th = th3;
                                        }
                                    }
                                }
                            }
                            l(this.f9130h, this.f9134n, closeableReference, 1.0f, true, true, true);
                            ta.a.D();
                            ta.a.D();
                        } else {
                            this.a.a(f9.c.G);
                            GenericDraweeHierarchy genericDraweeHierarchy = this.f9128f;
                            com.facebook.drawee.drawable.d dVar = genericDraweeHierarchy.f4480e;
                            if (dVar.c(3) != null) {
                                dVar.O++;
                                genericDraweeHierarchy.o(0.0f);
                                dVar.b();
                                dVar.a();
                            }
                            this.k = true;
                            this.f9132l = false;
                            ta.a.D();
                            if (p8.a.a.isLoggable(2)) {
                                p8.a.q("controller %x: getDataSource", Integer.valueOf(System.identityHashCode(bVar)), d9.b.class);
                            }
                            DataSource dataSource = (DataSource) bVar.f7451x.get();
                            ta.a.D();
                            this.f9134n = dataSource;
                            o(dataSource, null);
                            if (p8.a.a.isLoggable(2)) {
                                p8.a.p(f9123t, "controller %x %s: submitRequest: dataSource: %x", Integer.valueOf(System.identityHashCode(this)), this.f9130h, Integer.valueOf(System.identityHashCode(this.f9134n)));
                            }
                            this.f9134n.d(new a(this, this.f9130h, this.f9134n.a()), this.f9125c);
                            ta.a.D();
                        }
                    } else {
                        closeableReference2.close();
                    }
                }
                ta.a.D();
                closeableReference = null;
                if (closeableReference == null) {
                }
            } catch (Throwable th4) {
                ta.a.D();
                throw th4;
            }
        }
        ta.a.D();
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public final void onDetach() {
        ta.a.D();
        if (p8.a.a.isLoggable(2)) {
            p8.a.o(f9123t, "controller %x %s: onDetach", Integer.valueOf(System.identityHashCode(this)), this.f9130h);
        }
        this.a.a(f9.c.E);
        this.j = false;
        f9.b bVar = this.f9124b;
        bVar.getClass();
        if (Looper.getMainLooper().getThread() == Thread.currentThread()) {
            synchronized (bVar.f8472d) {
                try {
                    if (!((ArrayList) bVar.f8474i).contains(this)) {
                        ((ArrayList) bVar.f8474i).add(this);
                        boolean z5 = ((ArrayList) bVar.f8474i).size() == 1;
                        if (z5) {
                            ((Handler) bVar.f8473e).post((h) bVar.f8476w);
                        }
                    }
                } finally {
                }
            }
        } else {
            m();
        }
        ta.a.D();
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        if (!p8.a.a.isLoggable(2)) {
            return false;
        }
        p8.a.p(f9123t, "controller %x %s: onTouchEvent %s", Integer.valueOf(System.identityHashCode(this)), this.f9130h, motionEvent);
        return false;
    }

    public String toString() {
        r j = o8.h.j(this);
        j.g("isAttached", this.j);
        j.g("isRequestSubmitted", this.k);
        j.g("hasFetchFailed", this.f9132l);
        CloseableReference closeableReference = (CloseableReference) this.f9135o;
        j.f((closeableReference == null || !closeableReference.r()) ? 0 : System.identityHashCode(closeableReference.f4409e.a()), "fetchedImage");
        j.h(this.a.a.toString(), "events");
        return j.toString();
    }
}
