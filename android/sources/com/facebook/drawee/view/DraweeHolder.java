package com.facebook.drawee.view;

import android.graphics.drawable.Drawable;
import com.facebook.drawee.drawable.q;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.drawee.interfaces.DraweeHierarchy;
import f9.c;
import f9.d;
import j9.a;
import k2.r;
import o8.h;

/* loaded from: classes3.dex */
public final class DraweeHolder {

    /* renamed from: d, reason: collision with root package name */
    public DraweeHierarchy f4505d;

    /* renamed from: f, reason: collision with root package name */
    public final d f4507f;
    public boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public boolean f4503b = false;

    /* renamed from: c, reason: collision with root package name */
    public boolean f4504c = true;

    /* renamed from: e, reason: collision with root package name */
    public DraweeController f4506e = null;

    public DraweeHolder(GenericDraweeHierarchy genericDraweeHierarchy) {
        this.f4507f = d.f8485c ? new d() : d.f8484b;
        if (genericDraweeHierarchy != null) {
            g(genericDraweeHierarchy);
        }
    }

    public final void a() {
        if (this.a) {
            return;
        }
        this.f4507f.a(c.f8483y);
        this.a = true;
        DraweeController draweeController = this.f4506e;
        if (draweeController == null || draweeController.getHierarchy() == null) {
            return;
        }
        this.f4506e.onAttach();
    }

    public final void b() {
        if (this.f4503b && this.f4504c) {
            a();
            return;
        }
        if (this.a) {
            this.f4507f.a(c.E);
            this.a = false;
            if (d()) {
                this.f4506e.onDetach();
            }
        }
    }

    public final Drawable c() {
        DraweeHierarchy draweeHierarchy = this.f4505d;
        if (draweeHierarchy == null) {
            return null;
        }
        return draweeHierarchy.a();
    }

    public final boolean d() {
        DraweeController draweeController = this.f4506e;
        return draweeController != null && draweeController.getHierarchy() == this.f4505d;
    }

    public final void e(boolean z5) {
        if (this.f4504c == z5) {
            return;
        }
        this.f4507f.a(z5 ? c.N : c.O);
        this.f4504c = z5;
        b();
    }

    public final void f(DraweeController draweeController) {
        boolean z5 = this.a;
        d dVar = this.f4507f;
        if (z5 && z5) {
            dVar.a(c.E);
            this.a = false;
            if (d()) {
                this.f4506e.onDetach();
            }
        }
        if (d()) {
            dVar.a(c.f8480v);
            this.f4506e.setHierarchy(null);
        }
        this.f4506e = draweeController;
        if (draweeController != null) {
            dVar.a(c.f8479i);
            this.f4506e.setHierarchy(this.f4505d);
        } else {
            dVar.a(c.f8481w);
        }
        if (z5) {
            a();
        }
    }

    public final void g(DraweeHierarchy draweeHierarchy) {
        this.f4507f.a(c.f8477d);
        boolean d6 = d();
        Object c6 = c();
        if (c6 != null) {
            ((a) ((q) c6)).f12430e = null;
        }
        draweeHierarchy.getClass();
        this.f4505d = draweeHierarchy;
        a a = draweeHierarchy.a();
        e(a == null || a.isVisible());
        Object c8 = c();
        if (c8 != null) {
            ((a) ((q) c8)).f12430e = this;
        }
        if (d6) {
            this.f4506e.setHierarchy(draweeHierarchy);
        }
    }

    public final String toString() {
        r j = h.j(this);
        j.g("controllerAttached", this.a);
        j.g("holderAttached", this.f4503b);
        j.g("drawableVisible", this.f4504c);
        j.h(this.f4507f.a.toString(), "events");
        return j.toString();
    }
}
