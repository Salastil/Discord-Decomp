package fr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends kotlin.collections.b {

    /* renamed from: i, reason: collision with root package name */
    public int f9005i = -1;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ c f9006v;

    public b(c cVar) {
        this.f9006v = cVar;
    }

    @Override // kotlin.collections.b
    public final void a() {
        int i5;
        Object[] objArr;
        do {
            i5 = this.f9005i + 1;
            this.f9005i = i5;
            objArr = this.f9006v.f9007d;
            if (i5 >= objArr.length) {
                break;
            }
        } while (objArr[i5] == null);
        if (i5 >= objArr.length) {
            this.f13487d = 2;
            return;
        }
        Object obj = objArr[i5];
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type T of org.jetbrains.kotlin.util.ArrayMapImpl");
        this.f13488e = obj;
        this.f13487d = 1;
    }
}
