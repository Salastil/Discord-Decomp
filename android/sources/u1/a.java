package u1;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import o1.l;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18777d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f18778e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ l f18779i;

    public /* synthetic */ a(d dVar, l lVar, int i5) {
        this.f18777d = i5;
        this.f18778e = dVar;
        this.f18779i = lVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f18777d) {
            case 0:
                d dVar = this.f18778e;
                dVar.g().execute(new b(dVar, this.f18779i, 2));
                break;
            default:
                d dVar2 = this.f18778e;
                dVar2.g().execute(new b(dVar2, this.f18779i, 1));
                break;
        }
        return Unit.a;
    }
}
