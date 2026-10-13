package xr;

import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends f {

    /* renamed from: d, reason: collision with root package name */
    public final List f20554d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(List missingFields, String str, a aVar) {
        super(str, aVar);
        Intrinsics.checkNotNullParameter(missingFields, "missingFields");
        this.f20554d = missingFields;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public a(String serialName, ArrayList missingFields) {
        this(missingFields, r5, null);
        String str;
        Intrinsics.checkNotNullParameter(missingFields, "missingFields");
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        if (missingFields.size() == 1) {
            str = com.discord.chat.bridge.botuikit.a.k(new StringBuilder("Field '"), (String) missingFields.get(0), "' is required for type with serial name '", serialName, "', but it was missing");
        } else {
            str = "Fields " + missingFields + " are required for type with serial name '" + serialName + "', but they were missing";
        }
    }
}
