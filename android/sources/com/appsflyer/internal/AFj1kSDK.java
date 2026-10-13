package com.appsflyer.internal;

import android.content.Intent;
import android.os.Parcelable;
import com.appsflyer.AFLogger;
import fo.q;
import java.util.ConcurrentModificationException;
import kotlin.Result;
import kotlin.collections.x;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.reflect.KClass;
import org.jetbrains.annotations.NotNull;

@SourceDebugExtension({"SMAP\nAFIntentWrapper.kt\nKotlin\n*S Kotlin\n*F\n+ 1 AFIntentWrapper.kt\ncom/appsflyer/internal/util/AFIntentWrapper\n+ 2 MultiCatch.kt\ncom/appsflyer/internal/util/MultiCatchKt\n*L\n1#1,111:1\n16#2,7:112\n*S KotlinDebug\n*F\n+ 1 AFIntentWrapper.kt\ncom/appsflyer/internal/util/AFIntentWrapper\n*L\n84#1:112,7\n*E\n"})
/* loaded from: classes.dex */
public final class AFj1kSDK {

    @NotNull
    final Intent getCurrencyIso4217Code;

    public AFj1kSDK(@NotNull Intent intent) {
        Intrinsics.checkNotNullParameter(intent, "");
        this.getCurrencyIso4217Code = intent;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v1, types: [fo.r] */
    /* JADX WARN: Type inference failed for: r1v9, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r7v3, types: [fo.r] */
    /* JADX WARN: Type inference failed for: r7v4 */
    /* JADX WARN: Type inference failed for: r7v5 */
    /* JADX WARN: Type inference failed for: r7v6, types: [java.lang.Object] */
    private final <T> T AFAdRevenueData(Function0<? extends T> function0, String str, T t5, boolean z5) {
        T t10;
        ?? i5;
        synchronized (this.getCurrencyIso4217Code) {
            try {
                q qVar = Result.f13476e;
                t10 = function0.invoke();
            } catch (Throwable th2) {
                q qVar2 = Result.f13476e;
                t10 = ki.b.i(th2);
            }
            KClass[] kClassArr = {Reflection.getOrCreateKotlinClass(ConcurrentModificationException.class), Reflection.getOrCreateKotlinClass(ArrayIndexOutOfBoundsException.class)};
            Throwable a = Result.a(t10);
            T t11 = t10;
            if (a != null) {
                try {
                } catch (Throwable th3) {
                    q qVar3 = Result.f13476e;
                    i5 = ki.b.i(th3);
                }
                if (!x.p(Reflection.getOrCreateKotlinClass(a.getClass()), kClassArr)) {
                    throw a;
                }
                if (z5) {
                    i5 = AFAdRevenueData(function0, str, t5, false);
                } else {
                    AFLogger.afErrorLog(str, a, false, false);
                    i5 = t5;
                }
                t11 = i5;
            }
            Throwable a10 = Result.a(t11);
            if (a10 == null) {
                t5 = t11;
            } else {
                AFLogger.afErrorLog(str, a10, false, false);
            }
        }
        return t5;
    }

    public final <T extends Parcelable> T H_(@NotNull final String str) {
        Intrinsics.checkNotNullParameter(str, "");
        return (T) AFAdRevenueData(new Function0<T>() { // from class: com.appsflyer.internal.AFj1kSDK.4
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            /* JADX WARN: Incorrect return type in method signature: ()TT; */
            @Override // kotlin.jvm.functions.Function0
            /* renamed from: J_, reason: merged with bridge method [inline-methods] */
            public final Parcelable invoke() {
                return AFj1kSDK.this.getCurrencyIso4217Code.getParcelableExtra(str);
            }
        }, s4.h.f("Error while trying to read ", str, " extra from intent"), null, true);
    }

    public final Intent I_(@NotNull final String str, final long j) {
        Intrinsics.checkNotNullParameter(str, "");
        return (Intent) AFAdRevenueData(new Function0<Intent>() { // from class: com.appsflyer.internal.AFj1kSDK.2
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: K_, reason: merged with bridge method [inline-methods] */
            public final Intent invoke() {
                return AFj1kSDK.this.getCurrencyIso4217Code.putExtra(str, j);
            }
        }, s4.h.f("Error while trying to write ", str, " extra to intent"), null, true);
    }

    public final String getCurrencyIso4217Code(@NotNull final String str) {
        Intrinsics.checkNotNullParameter(str, "");
        return (String) AFAdRevenueData(new Function0<String>() { // from class: com.appsflyer.internal.AFj1kSDK.3
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            /* renamed from: getMediationNetwork, reason: merged with bridge method [inline-methods] */
            public final String invoke() {
                return AFj1kSDK.this.getCurrencyIso4217Code.getStringExtra(str);
            }
        }, s4.h.f("Error while trying to read ", str, " extra from intent"), null, true);
    }

    public final boolean getRevenue(@NotNull final String str) {
        Intrinsics.checkNotNullParameter(str, "");
        Boolean bool = (Boolean) AFAdRevenueData(new Function0<Boolean>() { // from class: com.appsflyer.internal.AFj1kSDK.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: getMonetizationNetwork, reason: merged with bridge method [inline-methods] */
            public final Boolean invoke() {
                return Boolean.valueOf(AFj1kSDK.this.getCurrencyIso4217Code.hasExtra(str));
            }
        }, s4.h.f("Error while trying to check presence of ", str, " extra from intent"), Boolean.TRUE, true);
        if (bool != null) {
            return bool.booleanValue();
        }
        return true;
    }
}
