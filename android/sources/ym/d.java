package ym;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20967d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Ref.IntRef f20968e;

    public /* synthetic */ d(Ref.IntRef intRef, int i5) {
        this.f20967d = i5;
        this.f20968e = intRef;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int i5;
        switch (this.f20967d) {
            case 0:
                Ref.IntRef intRef = this.f20968e;
                i5 = intRef.element;
                intRef.element = i5 + 1;
                break;
            default:
                Ref.IntRef intRef2 = this.f20968e;
                i5 = intRef2.element;
                intRef2.element = i5 + 1;
                break;
        }
        return Integer.valueOf(i5);
    }
}
