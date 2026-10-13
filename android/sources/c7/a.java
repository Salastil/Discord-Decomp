package c7;

import com.discord.minibsdiff.BSDiff;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3360d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f3361e;

    public /* synthetic */ a(long j, int i5) {
        this.f3360d = i5;
        this.f3361e = j;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        int chunkRange$lambda$0;
        switch (this.f3360d) {
            case 0:
                chunkRange$lambda$0 = BSDiff.chunkRange$lambda$0(this.f3361e, ((Long) obj).longValue());
                return Integer.valueOf(chunkRange$lambda$0);
            default:
                return Long.valueOf(this.f3361e);
        }
    }
}
