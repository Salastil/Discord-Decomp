package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.common.Priority;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public class e implements ProducerContext {
    public static final com.facebook.soloader.t J;
    public static final Object K;
    public Priority E;
    public boolean F;
    public boolean G;
    public final ArrayList H;
    public final ja.f I;

    /* renamed from: d, reason: collision with root package name */
    public final ImageRequest f4716d;

    /* renamed from: e, reason: collision with root package name */
    public final String f4717e;

    /* renamed from: i, reason: collision with root package name */
    public final a1 f4718i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f4719v;

    /* renamed from: w, reason: collision with root package name */
    public final ImageRequest.RequestLevel f4720w;

    /* renamed from: x, reason: collision with root package name */
    public final HashMap f4721x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f4722y;

    static {
        String[] strArr = {StackTraceHelper.ID_KEY, "uri_source"};
        int i5 = com.facebook.soloader.t.f5125d;
        HashSet hashSet = new HashSet(2);
        Collections.addAll(hashSet, strArr);
        J = new com.facebook.soloader.t(hashSet);
        K = new Object();
    }

    public e(ImageRequest imageRequest, String str, String str2, a1 a1Var, Object obj, ImageRequest.RequestLevel requestLevel, boolean z5, boolean z6, Priority priority, ja.f fVar) {
        this.f4716d = imageRequest;
        this.f4717e = str;
        HashMap hashMap = new HashMap();
        this.f4721x = hashMap;
        hashMap.put(StackTraceHelper.ID_KEY, str);
        hashMap.put("uri_source", imageRequest == null ? "null-request" : imageRequest.getSourceUri());
        this.f4718i = a1Var;
        this.f4719v = obj == null ? K : obj;
        this.f4720w = requestLevel;
        this.f4722y = z5;
        this.E = priority;
        this.F = z6;
        this.G = false;
        this.H = new ArrayList();
        this.I = fVar;
    }

    public static void a(ArrayList arrayList) {
        if (arrayList == null) {
            return;
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((f) it.next()).b();
        }
    }

    public static void b(ArrayList arrayList) {
        if (arrayList == null) {
            return;
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((f) it.next()).c();
        }
    }

    public static void d(ArrayList arrayList) {
        if (arrayList == null) {
            return;
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((f) it.next()).d();
        }
    }

    @Override // w9.a
    public final void A(Object obj, String str) {
        if (J.contains(str)) {
            return;
        }
        this.f4721x.put(str, obj);
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final a1 C() {
        return this.f4718i;
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final synchronized boolean P() {
        return this.F;
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final ImageRequest.RequestLevel Q() {
        return this.f4720w;
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final Object c() {
        return this.f4719v;
    }

    public final void e() {
        ArrayList arrayList;
        synchronized (this) {
            if (this.G) {
                arrayList = null;
            } else {
                this.G = true;
                arrayList = new ArrayList(this.H);
            }
        }
        if (arrayList == null) {
            return;
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((f) it.next()).a();
        }
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final synchronized Priority f() {
        return this.E;
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final ImageRequest g() {
        return this.f4716d;
    }

    @Override // w9.a
    public final Map getExtras() {
        return this.f4721x;
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final String getId() {
        return this.f4717e;
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final void i(f fVar) {
        boolean z5;
        synchronized (this) {
            this.H.add(fVar);
            z5 = this.G;
        }
        if (z5) {
            fVar.a();
        }
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final ja.f l() {
        return this.I;
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final void o(String str, String str2) {
        HashMap hashMap = this.f4721x;
        hashMap.put("origin", str);
        hashMap.put("origin_sub", str2);
    }

    @Override // w9.a
    public final void q(Map map) {
        if (map == null) {
            return;
        }
        for (Map.Entry entry : map.entrySet()) {
            A(entry.getValue(), (String) entry.getKey());
        }
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final synchronized boolean r() {
        return this.f4722y;
    }

    @Override // w9.a
    public final Object t(String str) {
        return this.f4721x.get(str);
    }

    @Override // com.facebook.imagepipeline.producers.ProducerContext
    public final void x(String str) {
        o(str, "default");
    }
}
