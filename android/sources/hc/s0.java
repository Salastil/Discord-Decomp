package hc;

import android.net.Uri;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

/* loaded from: classes3.dex */
public final class s0 {
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public int f9863b;

    /* renamed from: c, reason: collision with root package name */
    public int f9864c;

    /* renamed from: d, reason: collision with root package name */
    public Object f9865d;

    /* renamed from: e, reason: collision with root package name */
    public Serializable f9866e;

    /* renamed from: f, reason: collision with root package name */
    public Object f9867f;

    /* renamed from: g, reason: collision with root package name */
    public Object f9868g;

    public s0(byte[] bArr, String str, ArrayList arrayList, String str2) {
        this(bArr, str, arrayList, str2, -1, -1);
    }

    public void a(ni.i iVar) {
        if (((HashSet) this.f9865d).contains(iVar.a)) {
            throw new IllegalArgumentException("Components are not allowed to depend on interfaces they themselves provide.");
        }
        ((HashSet) this.f9866e).add(iVar);
    }

    public ni.b b() {
        if (((ni.e) this.f9867f) != null) {
            return new ni.b(this.a, new HashSet((HashSet) this.f9865d), new HashSet((HashSet) this.f9866e), this.f9863b, this.f9864c, (ni.e) this.f9867f, (HashSet) this.f9868g);
        }
        throw new IllegalStateException("Missing required property: factory.");
    }

    public s0(byte[] bArr, String str, List list, String str2, int i5, int i6) {
        this.f9865d = bArr;
        this.a = str;
        this.f9867f = list;
        this.f9866e = str2;
        this.f9863b = i6;
        this.f9864c = i5;
    }

    public s0(Class cls, Class[] clsArr) {
        this.a = null;
        HashSet hashSet = new HashSet();
        this.f9865d = hashSet;
        this.f9866e = new HashSet();
        this.f9863b = 0;
        this.f9864c = 0;
        this.f9868g = new HashSet();
        hashSet.add(ni.q.a(cls));
        for (Class cls2 : clsArr) {
            zo.c0.h(cls2, "Null interface");
            ((HashSet) this.f9865d).add(ni.q.a(cls2));
        }
    }

    public s0(Uri uri) {
        this.f9865d = uri;
    }
}
