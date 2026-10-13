package fn;

import ha.k;
import io.sentry.hints.j;
import qa.s;

/* loaded from: classes3.dex */
public final class a extends c {

    /* renamed from: i, reason: collision with root package name */
    public static final s f8797i = new s();

    /* renamed from: v, reason: collision with root package name */
    public static final r8.c f8798v = new r8.c(6);

    /* renamed from: w, reason: collision with root package name */
    public static final k f8799w = new k(7);
    public static final j E = new j(7);
    public static final j8.b F = new j8.b(7, (byte) 0);

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(int i5, int i6, int i10) {
        super(i5, i6, "topDidAppear", "onDidAppear");
        switch (i10) {
            case 1:
                super(i5, i6, "topDidDisappear", "onDidDisappear");
                break;
            case 2:
                super(i5, i6, "topNativeDismissPrevented", "onNativeDismissPrevented");
                break;
            case 3:
                super(i5, i6, "topWillAppear", "onWillAppear");
                break;
            case 4:
                super(i5, i6, "topWillDisappear", "onWillDisappear");
                break;
            default:
                break;
        }
    }
}
