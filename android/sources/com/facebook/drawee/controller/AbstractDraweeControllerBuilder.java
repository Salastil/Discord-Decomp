package com.facebook.drawee.controller;

import com.facebook.common.internal.Supplier;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.imagepipeline.request.ImageRequest;
import d9.b;
import g9.c;
import g9.d;
import g9.e;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicLong;
import o8.g;
import ta.a;
import y8.f;

/* loaded from: classes3.dex */
public abstract class AbstractDraweeControllerBuilder {

    /* renamed from: h, reason: collision with root package name */
    public static final d f4413h = new d();

    /* renamed from: i, reason: collision with root package name */
    public static final NullPointerException f4414i = new NullPointerException("No image request was specified!");
    public static final AtomicLong j = new AtomicLong();
    public Object a;

    /* renamed from: b, reason: collision with root package name */
    public ImageRequest f4415b;

    /* renamed from: c, reason: collision with root package name */
    public ImageRequest f4416c;

    /* renamed from: d, reason: collision with root package name */
    public ControllerListener f4417d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f4418e;

    /* renamed from: f, reason: collision with root package name */
    public String f4419f;

    /* renamed from: g, reason: collision with root package name */
    public DraweeController f4420g;

    public final c a() {
        ImageRequest imageRequest;
        if (this.f4415b == null && (imageRequest = this.f4416c) != null) {
            this.f4415b = imageRequest;
            this.f4416c = null;
        }
        a.D();
        b d6 = d();
        d6.f9133m = this.f4419f;
        ControllerListener controllerListener = this.f4417d;
        if (controllerListener != null) {
            d6.a(controllerListener);
        }
        if (this.f4418e) {
            d6.a(f4413h);
        }
        a.D();
        return d6;
    }

    public abstract y8.a b(b bVar, String str, Object obj, Object obj2, int i5);

    public final void c() {
        this.a = null;
        this.f4415b = null;
        this.f4416c = null;
        this.f4417d = null;
        this.f4418e = false;
        this.f4420g = null;
        this.f4419f = null;
    }

    public abstract b d();

    public final Supplier e(b bVar, String str) {
        AbstractDraweeControllerBuilder abstractDraweeControllerBuilder;
        b bVar2;
        String str2;
        Supplier supplier;
        ImageRequest imageRequest = this.f4415b;
        if (imageRequest != null) {
            abstractDraweeControllerBuilder = this;
            bVar2 = bVar;
            str2 = str;
            supplier = new e(abstractDraweeControllerBuilder, bVar2, str2, imageRequest, this.a, 1);
        } else {
            abstractDraweeControllerBuilder = this;
            bVar2 = bVar;
            str2 = str;
            supplier = null;
        }
        if (supplier != null && abstractDraweeControllerBuilder.f4416c != null) {
            ArrayList arrayList = new ArrayList(2);
            arrayList.add(supplier);
            arrayList.add(new e(abstractDraweeControllerBuilder, bVar2, str2, abstractDraweeControllerBuilder.f4416c, abstractDraweeControllerBuilder.a, 1));
            supplier = new f(arrayList);
        }
        return supplier == null ? new g(2) : supplier;
    }
}
