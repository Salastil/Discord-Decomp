package com.discord.device.utils;

import android.content.Context;
import android.os.Build;
import fo.q;
import fo.r;
import ki.b;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0000\u001a\n\u0010\u0002\u001a\u00020\u0003*\u00020\u0004\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"PROPERTY_COMPAT_ALLOW_RESTRICTED_RESIZABILITY", "", "allowsRestrictedResizability", "", "Landroid/content/Context;", "device_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RestrictedResizabilityKt {

    @NotNull
    private static final String PROPERTY_COMPAT_ALLOW_RESTRICTED_RESIZABILITY = "android.window.PROPERTY_COMPAT_ALLOW_RESTRICTED_RESIZABILITY";

    public static final boolean allowsRestrictedResizability(@NotNull Context context) {
        Object i5;
        Intrinsics.checkNotNullParameter(context, "<this>");
        if (Build.VERSION.SDK_INT < 31) {
            return false;
        }
        try {
            q qVar = Result.f13476e;
            i5 = Boolean.valueOf(context.getPackageManager().getProperty(PROPERTY_COMPAT_ALLOW_RESTRICTED_RESIZABILITY, context.getPackageName()).getBoolean());
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        Object obj = Boolean.FALSE;
        if (i5 instanceof r) {
            i5 = obj;
        }
        return ((Boolean) i5).booleanValue();
    }
}
