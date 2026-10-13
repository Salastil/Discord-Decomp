package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class f1 implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6560d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ FlowCollector f6561e;

    public /* synthetic */ f1(FlowCollector flowCollector, int i5) {
        this.f6560d = i5;
        this.f6561e = flowCollector;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0026  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0034  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0094  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x00a2  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00e0  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x00ee  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0124  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x0132  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(Object obj, Continuation continuation) {
        e1 e1Var;
        int i5;
        l1 l1Var;
        int i6;
        p1 p1Var;
        int i10;
        e2.o oVar;
        int i11;
        switch (this.f6560d) {
            case 0:
                if (continuation instanceof e1) {
                    e1Var = (e1) continuation;
                    int i12 = e1Var.f6558e;
                    if ((i12 & Integer.MIN_VALUE) != 0) {
                        e1Var.f6558e = i12 - Integer.MIN_VALUE;
                        Object obj2 = e1Var.f6557d;
                        ko.a aVar = ko.a.f13464d;
                        i5 = e1Var.f6558e;
                        if (i5 != 0) {
                            ki.b.R(obj2);
                            Unit unit = Unit.a;
                            e1Var.f6558e = 1;
                            if (this.f6561e.emit(unit, e1Var) == aVar) {
                                return aVar;
                            }
                        } else {
                            if (i5 != 1) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            ki.b.R(obj2);
                        }
                        return Unit.a;
                    }
                }
                e1Var = new e1(this, continuation);
                Object obj22 = e1Var.f6557d;
                ko.a aVar2 = ko.a.f13464d;
                i5 = e1Var.f6558e;
                if (i5 != 0) {
                }
                return Unit.a;
            case 1:
                if (continuation instanceof l1) {
                    l1Var = (l1) continuation;
                    int i13 = l1Var.f6575e;
                    if ((i13 & Integer.MIN_VALUE) != 0) {
                        l1Var.f6575e = i13 - Integer.MIN_VALUE;
                        Object obj3 = l1Var.f6574d;
                        ko.a aVar3 = ko.a.f13464d;
                        i6 = l1Var.f6575e;
                        if (i6 != 0) {
                            ki.b.R(obj3);
                            Unit unit2 = Unit.a;
                            l1Var.f6575e = 1;
                            if (this.f6561e.emit(unit2, l1Var) == aVar3) {
                                return aVar3;
                            }
                        } else {
                            if (i6 != 1) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            ki.b.R(obj3);
                        }
                        return Unit.a;
                    }
                }
                l1Var = new l1(this, continuation);
                Object obj32 = l1Var.f6574d;
                ko.a aVar32 = ko.a.f13464d;
                i6 = l1Var.f6575e;
                if (i6 != 0) {
                }
                return Unit.a;
            case 2:
                if (continuation instanceof p1) {
                    p1Var = (p1) continuation;
                    int i14 = p1Var.f6587e;
                    if ((i14 & Integer.MIN_VALUE) != 0) {
                        p1Var.f6587e = i14 - Integer.MIN_VALUE;
                        Object obj4 = p1Var.f6586d;
                        ko.a aVar4 = ko.a.f13464d;
                        i10 = p1Var.f6587e;
                        if (i10 != 0) {
                            ki.b.R(obj4);
                            Double d6 = new Double(((Number) obj).floatValue());
                            p1Var.f6587e = 1;
                            if (this.f6561e.emit(d6, p1Var) == aVar4) {
                                return aVar4;
                            }
                        } else {
                            if (i10 != 1) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            ki.b.R(obj4);
                        }
                        return Unit.a;
                    }
                }
                p1Var = new p1(this, continuation);
                Object obj42 = p1Var.f6586d;
                ko.a aVar42 = ko.a.f13464d;
                i10 = p1Var.f6587e;
                if (i10 != 0) {
                }
                return Unit.a;
            default:
                if (continuation instanceof e2.o) {
                    oVar = (e2.o) continuation;
                    int i15 = oVar.f7865e;
                    if ((i15 & Integer.MIN_VALUE) != 0) {
                        oVar.f7865e = i15 - Integer.MIN_VALUE;
                        Object obj5 = oVar.f7864d;
                        ko.a aVar5 = ko.a.f13464d;
                        i11 = oVar.f7865e;
                        if (i11 != 0) {
                            ki.b.R(obj5);
                            e2.a0 a0Var = (e2.a0) obj;
                            if (a0Var instanceof e2.f) {
                                throw ((e2.f) a0Var).a;
                            }
                            if (a0Var instanceof e2.e) {
                                throw ((e2.e) a0Var).a;
                            }
                            if (!(a0Var instanceof e2.b)) {
                                if (a0Var instanceof e2.b0) {
                                    throw new IllegalStateException("This is a bug in DataStore. Please file a bug at: https://issuetracker.google.com/issues/new?component=907884&template=1466542");
                                }
                                throw new fo.n();
                            }
                            Object obj6 = ((e2.b) a0Var).a;
                            oVar.f7865e = 1;
                            if (this.f6561e.emit(obj6, oVar) == aVar5) {
                                return aVar5;
                            }
                        } else {
                            if (i11 != 1) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            ki.b.R(obj5);
                        }
                        return Unit.a;
                    }
                }
                oVar = new e2.o(this, continuation);
                Object obj52 = oVar.f7864d;
                ko.a aVar52 = ko.a.f13464d;
                i11 = oVar.f7865e;
                if (i11 != 0) {
                }
                return Unit.a;
        }
    }
}
