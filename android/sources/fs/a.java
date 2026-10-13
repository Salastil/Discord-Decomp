package fs;

import e4.m;
import java.util.LinkedHashMap;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.modules.SerializersModule;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: b, reason: collision with root package name */
    public static final a f9061b = new a();
    public final SerializersModule a = es.b.a;

    public final LinkedHashMap a(KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        m mVar = new m(this);
        mVar.M(serializer, obj);
        return (LinkedHashMap) mVar.f7965v;
    }
}
