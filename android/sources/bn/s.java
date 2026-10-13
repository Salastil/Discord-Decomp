package bn;

import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final /* synthetic */ class s implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3104d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ j f3105e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ k[] f3106i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ t f3107v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ List f3108w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Ref.IntRef f3109x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Ref.BooleanRef f3110y;

    public /* synthetic */ s(int i5, j jVar, k[] kVarArr, t tVar, List list, Ref.IntRef intRef, Ref.BooleanRef booleanRef) {
        this.f3104d = i5;
        this.f3105e = jVar;
        this.f3106i = kVarArr;
        this.f3107v = tVar;
        this.f3108w = list;
        this.f3109x = intRef;
        this.f3110y = booleanRef;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        d icon = (d) obj;
        Intrinsics.checkNotNullParameter(icon, "icon");
        i iVar = this.f3105e.f3072b;
        t.c(this.f3106i, this.f3107v, this.f3108w, this.f3109x, this.f3110y, this.f3104d, new i(iVar.a, iVar.f3061b, iVar.f3062c, iVar.f3063d, iVar.f3064e, iVar.f3065f, iVar.f3066g, icon, iVar.f3068i, iVar.j, iVar.k, iVar.f3069l, iVar.f3070m, iVar.f3071n));
        return Unit.a;
    }
}
