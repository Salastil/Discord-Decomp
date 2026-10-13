package kotlin.coroutines;

import java.io.Serializable;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import s4.h;

/* loaded from: classes3.dex */
public final class c implements CoroutineContext, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final CoroutineContext f13535d;

    /* renamed from: e, reason: collision with root package name */
    public final CoroutineContext.Element f13536e;

    public c(CoroutineContext.Element element, CoroutineContext left) {
        Intrinsics.checkNotNullParameter(left, "left");
        Intrinsics.checkNotNullParameter(element, "element");
        this.f13535d = left;
        this.f13536e = element;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext C(f key) {
        Intrinsics.checkNotNullParameter(key, "key");
        CoroutineContext.Element element = this.f13536e;
        CoroutineContext.Element o6 = element.o(key);
        CoroutineContext coroutineContext = this.f13535d;
        if (o6 != null) {
            return coroutineContext;
        }
        CoroutineContext C = coroutineContext.C(key);
        return C == coroutineContext ? this : C == g.f13538d ? element : new c(element, C);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final Object b0(Object obj, Function2 operation) {
        Intrinsics.checkNotNullParameter(operation, "operation");
        return operation.invoke(this.f13535d.b0(obj, operation), this.f13536e);
    }

    public final boolean equals(Object obj) {
        boolean z5;
        if (this == obj) {
            return true;
        }
        if (obj instanceof c) {
            c cVar = (c) obj;
            int i5 = 2;
            c cVar2 = cVar;
            int i6 = 2;
            while (true) {
                CoroutineContext coroutineContext = cVar2.f13535d;
                cVar2 = coroutineContext instanceof c ? (c) coroutineContext : null;
                if (cVar2 == null) {
                    break;
                }
                i6++;
            }
            c cVar3 = this;
            while (true) {
                CoroutineContext coroutineContext2 = cVar3.f13535d;
                cVar3 = coroutineContext2 instanceof c ? (c) coroutineContext2 : null;
                if (cVar3 == null) {
                    break;
                }
                i5++;
            }
            if (i6 == i5) {
                c cVar4 = this;
                while (true) {
                    CoroutineContext.Element element = cVar4.f13536e;
                    if (!Intrinsics.areEqual(cVar.o(element.getKey()), element)) {
                        z5 = false;
                        break;
                    }
                    CoroutineContext coroutineContext3 = cVar4.f13535d;
                    if (!(coroutineContext3 instanceof c)) {
                        Intrinsics.checkNotNull(coroutineContext3, "null cannot be cast to non-null type kotlin.coroutines.CoroutineContext.Element");
                        CoroutineContext.Element element2 = (CoroutineContext.Element) coroutineContext3;
                        z5 = Intrinsics.areEqual(cVar.o(element2.getKey()), element2);
                        break;
                    }
                    cVar4 = (c) coroutineContext3;
                }
                if (z5) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f13536e.hashCode() + this.f13535d.hashCode();
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext.Element o(f key) {
        Intrinsics.checkNotNullParameter(key, "key");
        c cVar = this;
        while (true) {
            CoroutineContext.Element o6 = cVar.f13536e.o(key);
            if (o6 != null) {
                return o6;
            }
            CoroutineContext coroutineContext = cVar.f13535d;
            if (!(coroutineContext instanceof c)) {
                return coroutineContext.o(key);
            }
            cVar = (c) coroutineContext;
        }
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext r(CoroutineContext context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return context == g.f13538d ? this : (CoroutineContext) context.b0(this, new com.discord.c(20));
    }

    public final String toString() {
        return h.h(new StringBuilder("["), (String) b0("", new com.discord.c(19)), ']');
    }
}
