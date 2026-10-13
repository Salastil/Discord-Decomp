package kotlin.collections;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g1 extends lo.g implements Function2 {

    /* renamed from: e, reason: collision with root package name */
    public Object f13498e;

    /* renamed from: i, reason: collision with root package name */
    public Iterator f13499i;

    /* renamed from: v, reason: collision with root package name */
    public int f13500v;

    /* renamed from: w, reason: collision with root package name */
    public int f13501w;

    /* renamed from: x, reason: collision with root package name */
    public /* synthetic */ Object f13502x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Iterator f13503y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g1(Iterator it, Continuation continuation) {
        super(2, continuation);
        this.f13503y = it;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        g1 g1Var = new g1(this.f13503y, continuation);
        g1Var.f13502x = obj;
        return g1Var;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((g1) create((kr.k) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        kr.k kVar;
        ArrayList arrayList;
        Iterator it;
        int i5;
        b1 b1Var;
        kr.k kVar2;
        Object[] array;
        ko.a aVar = ko.a.f13464d;
        int i6 = this.f13501w;
        if (i6 == 0) {
            ki.b.R(obj);
            kVar = (kr.k) this.f13502x;
            arrayList = new ArrayList(2);
            it = this.f13503y;
            i5 = 0;
        } else {
            if (i6 != 1) {
                if (i6 != 2) {
                    if (i6 == 3) {
                        Iterator it2 = this.f13499i;
                        b1 b1Var2 = (b1) this.f13498e;
                        kr.k kVar3 = (kr.k) this.f13502x;
                        ki.b.R(obj);
                        b1Var2.b();
                        while (true) {
                            int i10 = b1Var2.f13490i;
                            Object[] objArr = b1Var2.f13489e;
                            if (!it2.hasNext()) {
                                b1Var = b1Var2;
                                kVar2 = kVar3;
                                break;
                            }
                            Object next = it2.next();
                            if (b1Var2.a() == i10) {
                                throw new IllegalStateException("ring buffer is full");
                            }
                            int i11 = b1Var2.f13491v;
                            int i12 = b1Var2.f13492w;
                            objArr[(i11 + i12) % i10] = next;
                            b1Var2.f13492w = i12 + 1;
                            if (b1Var2.a() == i10) {
                                if (b1Var2.f13492w >= 2) {
                                    ArrayList arrayList2 = new ArrayList(b1Var2);
                                    this.f13502x = kVar3;
                                    this.f13498e = b1Var2;
                                    this.f13499i = it2;
                                    this.f13501w = 3;
                                    kVar3.a(arrayList2, this);
                                    ko.a aVar2 = ko.a.f13464d;
                                    return aVar;
                                }
                                int i13 = i10 + (i10 >> 1) + 1;
                                if (i13 > 2) {
                                    i13 = 2;
                                }
                                if (b1Var2.f13491v == 0) {
                                    array = Arrays.copyOf(objArr, i13);
                                    Intrinsics.checkNotNullExpressionValue(array, "copyOf(...)");
                                } else {
                                    array = b1Var2.toArray(new Object[i13]);
                                }
                                b1Var2 = new b1(b1Var2.f13492w, array);
                            }
                        }
                    } else if (i6 == 4) {
                        b1Var = (b1) this.f13498e;
                        kVar2 = (kr.k) this.f13502x;
                        ki.b.R(obj);
                        b1Var.b();
                    } else if (i6 != 5) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    if (b1Var.f13492w > 2) {
                        ArrayList arrayList3 = new ArrayList(b1Var);
                        this.f13502x = kVar2;
                        this.f13498e = b1Var;
                        this.f13499i = null;
                        this.f13501w = 4;
                        kVar2.a(arrayList3, this);
                        ko.a aVar3 = ko.a.f13464d;
                        return aVar;
                    }
                    if (!b1Var.isEmpty()) {
                        this.f13502x = null;
                        this.f13498e = null;
                        this.f13499i = null;
                        this.f13501w = 5;
                        kVar2.a(b1Var, this);
                        ko.a aVar4 = ko.a.f13464d;
                        return aVar;
                    }
                    return Unit.a;
                }
                ki.b.R(obj);
                return Unit.a;
            }
            i5 = this.f13500v;
            it = this.f13499i;
            kVar = (kr.k) this.f13502x;
            ki.b.R(obj);
            arrayList = new ArrayList(2);
        }
        kr.k kVar4 = kVar;
        Iterator it3 = it;
        int i14 = i5;
        while (it3.hasNext()) {
            Object next2 = it3.next();
            if (i5 > 0) {
                i5--;
            } else {
                arrayList.add(next2);
                if (arrayList.size() == 2) {
                    this.f13502x = kVar4;
                    this.f13498e = arrayList;
                    this.f13499i = it3;
                    this.f13500v = i14;
                    this.f13501w = 1;
                    kVar4.a(arrayList, this);
                    ko.a aVar5 = ko.a.f13464d;
                    return aVar;
                }
            }
        }
        if (!arrayList.isEmpty()) {
            this.f13502x = null;
            this.f13498e = null;
            this.f13499i = null;
            this.f13501w = 2;
            kVar4.a(arrayList, this);
            ko.a aVar6 = ko.a.f13464d;
            return aVar;
        }
        return Unit.a;
    }
}
