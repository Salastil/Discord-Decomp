package nr;

import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final i f15642b;

    /* renamed from: c, reason: collision with root package name */
    public final Function3 f15643c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f15644d;

    /* renamed from: e, reason: collision with root package name */
    public final Throwable f15645e;

    public p(Object obj, i iVar, Function3 function3, Object obj2, Throwable th2) {
        this.a = obj;
        this.f15642b = iVar;
        this.f15643c = function3;
        this.f15644d = obj2;
        this.f15645e = th2;
    }

    public static p a(p pVar, i iVar, Throwable th2, int i5) {
        Object obj = pVar.a;
        if ((i5 & 2) != 0) {
            iVar = pVar.f15642b;
        }
        i iVar2 = iVar;
        Function3 function3 = pVar.f15643c;
        Object obj2 = pVar.f15644d;
        if ((i5 & 16) != 0) {
            th2 = pVar.f15645e;
        }
        return new p(obj, iVar2, function3, obj2, th2);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof p)) {
            return false;
        }
        p pVar = (p) obj;
        return Intrinsics.areEqual(this.a, pVar.a) && Intrinsics.areEqual(this.f15642b, pVar.f15642b) && Intrinsics.areEqual(this.f15643c, pVar.f15643c) && Intrinsics.areEqual(this.f15644d, pVar.f15644d) && Intrinsics.areEqual(this.f15645e, pVar.f15645e);
    }

    public final int hashCode() {
        Object obj = this.a;
        int hashCode = (obj == null ? 0 : obj.hashCode()) * 31;
        i iVar = this.f15642b;
        int hashCode2 = (hashCode + (iVar == null ? 0 : iVar.hashCode())) * 31;
        Function3 function3 = this.f15643c;
        int hashCode3 = (hashCode2 + (function3 == null ? 0 : function3.hashCode())) * 31;
        Object obj2 = this.f15644d;
        int hashCode4 = (hashCode3 + (obj2 == null ? 0 : obj2.hashCode())) * 31;
        Throwable th2 = this.f15645e;
        return hashCode4 + (th2 != null ? th2.hashCode() : 0);
    }

    public final String toString() {
        return "CompletedContinuation(result=" + this.a + ", cancelHandler=" + this.f15642b + ", onCancellation=" + this.f15643c + ", idempotentResume=" + this.f15644d + ", cancelCause=" + this.f15645e + ')';
    }

    public /* synthetic */ p(Object obj, i iVar, Function3 function3, Throwable th2, int i5) {
        this(obj, (i5 & 2) != 0 ? null : iVar, (i5 & 4) != 0 ? null : function3, (Object) null, (i5 & 16) != 0 ? null : th2);
    }
}
