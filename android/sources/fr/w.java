package fr;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class w implements e {
    public final Function1 a;

    /* renamed from: b, reason: collision with root package name */
    public final String f9055b;

    public w(String str, Function1 function1) {
        this.a = function1;
        this.f9055b = "must return ".concat(str);
    }

    @Override // fr.e
    public final boolean a(tp.e functionDescriptor) {
        Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
        return Intrinsics.areEqual(functionDescriptor.E, this.a.invoke(oq.e.e(functionDescriptor)));
    }

    @Override // fr.e
    public final String b(tp.e eVar) {
        return tn.g.n(this, eVar);
    }

    @Override // fr.e
    public final String getDescription() {
        return this.f9055b;
    }
}
