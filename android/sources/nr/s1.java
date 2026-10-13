package nr;

import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public abstract class s1 {
    public static final Object a(q1 q1Var, Function2 function2) {
        x.r(q1Var, new j0(0, x.n(q1Var.f18125v.getContext()).Q(q1Var.f15653w, q1Var, q1Var.f15590i)));
        return nf.e.B(q1Var, false, q1Var, function2);
    }

    public static final Object b(long j, Function2 function2, lo.c frame) {
        if (j <= 0) {
            throw new p1("Timed out immediately", null);
        }
        Object a = a(new q1(j, frame), function2);
        if (a == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return a;
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x006b A[ORIG_RETURN, RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x006d  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /* JADX WARN: Type inference failed for: r2v1, types: [T, nr.q1] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object c(long j, Function2 function2, lo.c cVar) {
        r1 frame;
        int i5;
        Ref.ObjectRef objectRef;
        if (cVar instanceof r1) {
            frame = (r1) cVar;
            int i6 = frame.f15658v;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                frame.f15658v = i6 - Integer.MIN_VALUE;
                Object obj = frame.f15657i;
                ko.a aVar = ko.a.f13464d;
                i5 = frame.f15658v;
                if (i5 != 0) {
                    ki.b.R(obj);
                    if (j <= 0) {
                        return null;
                    }
                    Ref.ObjectRef objectRef2 = new Ref.ObjectRef();
                    try {
                        frame.f15655d = function2;
                        frame.f15656e = objectRef2;
                        frame.f15658v = 1;
                        ?? q1Var = new q1(j, frame);
                        objectRef2.element = q1Var;
                        Object a = a(q1Var, function2);
                        if (a == aVar) {
                            try {
                                Intrinsics.checkNotNullParameter(frame, "frame");
                            } catch (p1 e9) {
                                e = e9;
                                objectRef = objectRef2;
                                if (e.f15650d == objectRef.element) {
                                }
                            }
                        }
                        return a == aVar ? aVar : a;
                    } catch (p1 e10) {
                        e = e10;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    objectRef = frame.f15656e;
                    try {
                        ki.b.R(obj);
                        return obj;
                    } catch (p1 e11) {
                        e = e11;
                    }
                }
                if (e.f15650d == objectRef.element) {
                    return null;
                }
                throw e;
            }
        }
        frame = new r1(cVar);
        Object obj2 = frame.f15657i;
        ko.a aVar2 = ko.a.f13464d;
        i5 = frame.f15658v;
        if (i5 != 0) {
        }
        if (e.f15650d == objectRef.element) {
        }
    }
}
