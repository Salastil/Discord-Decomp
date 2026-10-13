package wo;

import java.util.Random;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends wo.a {

    /* renamed from: i, reason: collision with root package name */
    public final a f19971i = new a();

    public static final class a extends ThreadLocal {
        @Override // java.lang.ThreadLocal
        public final Object initialValue() {
            return new Random();
        }
    }

    @Override // wo.a
    public final Random d() {
        Object obj = this.f19971i.get();
        Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
        return (Random) obj;
    }
}
