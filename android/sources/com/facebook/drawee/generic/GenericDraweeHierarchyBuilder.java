package com.facebook.drawee.generic;

import android.content.res.Resources;
import android.graphics.PorterDuffColorFilter;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.StateListDrawable;
import com.facebook.drawee.drawable.ScalingUtils$ScaleType;
import com.facebook.drawee.drawable.o;
import com.facebook.react.views.image.ReactImageView;
import j9.b;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes3.dex */
public final class GenericDraweeHierarchyBuilder {

    /* renamed from: r, reason: collision with root package name */
    public static final o f4482r = o.f4471d;

    /* renamed from: s, reason: collision with root package name */
    public static final o f4483s = o.f4470c;
    public final Resources a;

    /* renamed from: b, reason: collision with root package name */
    public int f4484b = ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS;

    /* renamed from: c, reason: collision with root package name */
    public float f4485c = 0.0f;

    /* renamed from: d, reason: collision with root package name */
    public Drawable f4486d = null;

    /* renamed from: e, reason: collision with root package name */
    public ScalingUtils$ScaleType f4487e;

    /* renamed from: f, reason: collision with root package name */
    public Drawable f4488f;

    /* renamed from: g, reason: collision with root package name */
    public ScalingUtils$ScaleType f4489g;

    /* renamed from: h, reason: collision with root package name */
    public Drawable f4490h;

    /* renamed from: i, reason: collision with root package name */
    public ScalingUtils$ScaleType f4491i;
    public Drawable j;
    public ScalingUtils$ScaleType k;

    /* renamed from: l, reason: collision with root package name */
    public ScalingUtils$ScaleType f4492l;

    /* renamed from: m, reason: collision with root package name */
    public PorterDuffColorFilter f4493m;

    /* renamed from: n, reason: collision with root package name */
    public Drawable f4494n;

    /* renamed from: o, reason: collision with root package name */
    public List f4495o;

    /* renamed from: p, reason: collision with root package name */
    public StateListDrawable f4496p;

    /* renamed from: q, reason: collision with root package name */
    public b f4497q;

    public GenericDraweeHierarchyBuilder(Resources resources) {
        this.a = resources;
        o oVar = f4482r;
        this.f4487e = oVar;
        this.f4488f = null;
        this.f4489g = oVar;
        this.f4490h = null;
        this.f4491i = oVar;
        this.j = null;
        this.k = oVar;
        this.f4492l = f4483s;
        this.f4493m = null;
        this.f4494n = null;
        this.f4495o = null;
        this.f4496p = null;
        this.f4497q = null;
    }

    public final GenericDraweeHierarchy a() {
        List list = this.f4495o;
        if (list != null) {
            Iterator it = list.iterator();
            while (it.hasNext()) {
                ((Drawable) it.next()).getClass();
            }
        }
        return new GenericDraweeHierarchy(this);
    }
}
