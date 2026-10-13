package x6;

import com.discord.intents.LinkingModule;
import com.facebook.react.bridge.Promise;
import java.util.function.Function;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Promise f20288b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ String f20289c;

    public /* synthetic */ a(Promise promise, String str, int i5) {
        this.a = i5;
        this.f20288b = promise;
        this.f20289c = str;
    }

    @Override // java.util.function.Function
    public final Object apply(Object obj) {
        Void tryOpenUrlAsUniversalLink$lambda$3;
        Void tryOpenScheme$lambda$7;
        switch (this.a) {
            case 0:
                tryOpenUrlAsUniversalLink$lambda$3 = LinkingModule.tryOpenUrlAsUniversalLink$lambda$3(this.f20288b, this.f20289c, (Throwable) obj);
                return tryOpenUrlAsUniversalLink$lambda$3;
            default:
                tryOpenScheme$lambda$7 = LinkingModule.tryOpenScheme$lambda$7(this.f20288b, this.f20289c, (Throwable) obj);
                return tryOpenScheme$lambda$7;
        }
    }
}
