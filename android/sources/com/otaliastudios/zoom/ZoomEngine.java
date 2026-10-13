package com.otaliastudios.zoom;

import android.content.Context;
import android.graphics.RectF;
import androidx.appcompat.widget.j0;
import com.discord.zoom_layout.ZoomLayoutFixed;
import el.g;
import el.h;
import fl.a;
import gl.d;
import il.b;
import io.sentry.internal.debugmeta.c;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;
import nf.e;

/* loaded from: classes3.dex */
public final class ZoomEngine {

    /* renamed from: l, reason: collision with root package name */
    public static final ZoomLogger f6620l;
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f6621b;

    /* renamed from: c, reason: collision with root package name */
    public ZoomLayoutFixed f6622c;

    /* renamed from: d, reason: collision with root package name */
    public final j0 f6623d;

    /* renamed from: e, reason: collision with root package name */
    public final c f6624e;

    /* renamed from: f, reason: collision with root package name */
    public final a f6625f;

    /* renamed from: g, reason: collision with root package name */
    public final b f6626g;

    /* renamed from: h, reason: collision with root package name */
    public final il.c f6627h;

    /* renamed from: i, reason: collision with root package name */
    public final hl.b f6628i;
    public final d j;
    public final gl.c k;

    static {
        Intrinsics.checkNotNullExpressionValue("ZoomEngine", "TAG");
        Intrinsics.checkNotNullParameter("ZoomEngine", "tag");
        f6620l = new ZoomLogger("ZoomEngine");
    }

    public ZoomEngine(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        j0 j0Var = new j0(this);
        this.f6623d = j0Var;
        this.f6624e = new c(this);
        a aVar = new a(j0Var);
        this.f6625f = aVar;
        b bVar = new b(this, new g(this, 0));
        this.f6626g = bVar;
        il.c cVar = new il.c(this, new g(this, 1));
        this.f6627h = cVar;
        hl.b bVar2 = new hl.b(cVar, bVar, aVar, j0Var);
        this.f6628i = bVar2;
        this.j = new d(context, bVar, aVar, bVar2);
        this.k = new gl.c(context, cVar, bVar, aVar, bVar2);
    }

    public static final float a(ZoomEngine zoomEngine) {
        hl.b bVar = zoomEngine.f6628i;
        int i5 = zoomEngine.a;
        ZoomLogger zoomLogger = f6620l;
        if (i5 == 0) {
            float width = bVar.j / bVar.f10087f.width();
            float height = bVar.k / bVar.f10087f.height();
            zoomLogger.c("computeTransformationZoom", "centerInside", "scaleX:", Float.valueOf(width), "scaleY:", Float.valueOf(height));
            return Math.min(width, height);
        }
        if (i5 != 1) {
            return 1.0f;
        }
        float width2 = bVar.j / bVar.f10087f.width();
        float height2 = bVar.k / bVar.f10087f.height();
        zoomLogger.c("computeTransformationZoom", "centerCrop", "scaleX:", Float.valueOf(width2), "scaleY:", Float.valueOf(height2));
        return Math.max(width2, height2);
    }

    public final void b(el.d listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        if (this.f6622c == null) {
            throw new IllegalStateException("container is not initialized.");
        }
        c cVar = this.f6624e;
        cVar.getClass();
        Intrinsics.checkNotNullParameter(listener, "listener");
        ArrayList arrayList = (ArrayList) cVar.f11623i;
        if (arrayList.contains(listener)) {
            return;
        }
        arrayList.add(listener);
    }

    public final boolean c() {
        a aVar = this.f6625f;
        int i5 = aVar.f8778b;
        if (i5 == 4) {
            this.j.f9364w.forceFinished(true);
            return true;
        }
        if (i5 != 3) {
            return false;
        }
        aVar.b(0);
        return true;
    }

    public final float d() {
        return this.f6628i.f() / this.f6627h.f10957v;
    }

    public final void e(float f2, float f10, float f11, boolean z5) {
        float f12 = f2 * this.f6627h.f10957v;
        int i5 = hl.d.k;
        hl.d w5 = e.w(new el.e(f12, f10, f11));
        hl.b bVar = this.f6628i;
        if (z5) {
            bVar.a(w5);
        } else {
            c();
            bVar.b(w5);
        }
    }

    public final void f(float f2, boolean z5) {
        int i5 = hl.d.k;
        hl.d w5 = e.w(new h(f2, 0));
        hl.b bVar = this.f6628i;
        if (z5) {
            bVar.a(w5);
        } else {
            c();
            bVar.b(w5);
        }
    }

    public final void g(float f2, float f10, boolean z5) {
        hl.b bVar = this.f6628i;
        RectF rectF = bVar.f10087f;
        if (f2 <= 0.0f || f10 <= 0.0f) {
            return;
        }
        if (rectF.width() == f2 && rectF.height() == f10 && !z5) {
            return;
        }
        float f11 = bVar.f();
        rectF.set(0.0f, 0.0f, f2, f10);
        bVar.g(f11, z5);
    }

    public final void h(float f2, int i5) {
        il.c cVar = this.f6627h;
        if (f2 < 0.0f) {
            cVar.getClass();
            throw new IllegalArgumentException("Max zoom should be >= 0.");
        }
        cVar.f10960y = f2;
        cVar.E = i5;
        if (d() > cVar.A0()) {
            f(cVar.A0(), true);
        }
    }

    public final void i(float f2, int i5) {
        il.c cVar = this.f6627h;
        if (f2 < 0.0f) {
            cVar.getClass();
            throw new IllegalArgumentException("Min zoom should be >= 0");
        }
        cVar.f10958w = f2;
        cVar.f10959x = i5;
        if (this.f6628i.f() <= cVar.B0()) {
            f(cVar.B0(), true);
        }
    }
}
