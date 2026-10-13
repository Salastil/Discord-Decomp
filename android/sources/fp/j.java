package fp;

import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class j implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8863d;

    /* renamed from: e, reason: collision with root package name */
    public final k f8864e;

    public /* synthetic */ j(k kVar, int i5) {
        this.f8863d = i5;
        this.f8864e = kVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f8863d) {
            case 0:
                return p.f8915l.a(this.f8864e.f8868d);
            default:
                return p.f8915l.a(this.f8864e.f8869e);
        }
    }
}
