package com.discord.age_assurance;

import com.discord.logging.Log;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.google.android.play.agesignals.AgeSignalsAccessResult;
import com.google.android.play.agesignals.AgeSignalsResult;
import com.google.firebase.messaging.r;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import qh.i;
import s4.h;

@Metadata(d1 = {"\u0000$\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a\u0010\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0002\u001a\u0010\u0010\u0004\u001a\u00020\u00032\u0006\u0010\u0005\u001a\u00020\u0006H\u0002\u001a\u0010\u0010\u0007\u001a\u00020\b2\u0006\u0010\u0005\u001a\u00020\u0006H\u0002\u001a\u0017\u0010\t\u001a\u00020\n2\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003H\u0002¢\u0006\u0002\u0010\u000b\u001a\f\u0010\f\u001a\u00020\n*\u00020\bH\u0002¨\u0006\r"}, d2 = {"fakeAccessResult", "Lcom/google/android/play/agesignals/AgeSignalsAccessResult;", "status", "", "accessStatusFor", "scenario", "", "buildFakeResult", "Lcom/google/android/play/agesignals/AgeSignalsResult;", "statusOnlyMap", "Lcom/facebook/react/bridge/WritableMap;", "(Ljava/lang/Integer;)Lcom/facebook/react/bridge/WritableMap;", "toWritableMap", "age_assurance_androidRelease"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nPlayAgeSignalsModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 PlayAgeSignalsModule.kt\ncom/discord/age_assurance/PlayAgeSignalsModuleKt\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,212:1\n1#2:213\n*E\n"})
/* loaded from: classes.dex */
public final class PlayAgeSignalsModuleKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final int accessStatusFor(String str) {
        if (Intrinsics.areEqual(str, "not_shared")) {
            return 2;
        }
        return Intrinsics.areEqual(str, "verification_required") ? 3 : 1;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static final AgeSignalsResult buildFakeResult(String str) {
        r rVar = new r(12, false);
        Intrinsics.checkNotNullExpressionValue(rVar, "builder(...)");
        switch (str.hashCode()) {
            case -1914429828:
                if (str.equals("supervised_pending")) {
                    rVar.f6259e = 2;
                    rVar.f6260i = 13;
                    rVar.f6261v = 17;
                    rVar.f6262w = 2;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setSignificantChangeStatus(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit = Unit.a;
                break;
            case -1252943896:
                if (str.equals("adult_assessed")) {
                    rVar.f6259e = 3;
                    rVar.f6260i = 18;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setAgeLower(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit2 = Unit.a;
                break;
            case -1050565112:
                if (str.equals("adult_self_declared")) {
                    rVar.f6259e = 1;
                    rVar.f6260i = 18;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setAgeLower(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit22 = Unit.a;
                break;
            case -448784151:
                if (str.equals("under_13")) {
                    rVar.f6259e = 2;
                    rVar.f6260i = 0;
                    rVar.f6261v = 12;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setAgeUpper(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit222 = Unit.a;
                break;
            case 3556058:
                if (str.equals("teen")) {
                    rVar.f6259e = 2;
                    rVar.f6260i = 13;
                    rVar.f6261v = 17;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setAgeUpper(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit2222 = Unit.a;
                break;
            case 92676538:
                if (str.equals("adult")) {
                    rVar.f6259e = 4;
                    rVar.f6260i = 18;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setAgeLower(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit22222 = Unit.a;
                break;
            case 96634189:
                if (str.equals("empty")) {
                    Unit unit3 = Unit.a;
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit222222 = Unit.a;
                break;
            case 1035797481:
                if (str.equals("supervised_declined")) {
                    rVar.f6259e = 2;
                    rVar.f6260i = 13;
                    rVar.f6261v = 17;
                    rVar.f6262w = 3;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setSignificantChangeStatus(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit2222222 = Unit.a;
                break;
            case 1652846194:
                if (str.equals("supervised_approved")) {
                    rVar.f6259e = 2;
                    rVar.f6260i = 13;
                    rVar.f6261v = 17;
                    rVar.f6262w = 1;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setSignificantChangeStatus(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit22222222 = Unit.a;
                break;
            case 1668680388:
                if (str.equals("under_13_declined")) {
                    rVar.f6259e = 2;
                    rVar.f6260i = 0;
                    rVar.f6261v = 12;
                    rVar.f6262w = 3;
                    Intrinsics.checkNotNullExpressionValue(rVar, "setSignificantChangeStatus(...)");
                    break;
                }
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit222222222 = Unit.a;
                break;
            default:
                Log.w$default(Log.INSTANCE, PlayAgeSignalsModule.TAG, h.f("Unknown fake scenario '", str, "'; returning empty result"), (Throwable) null, 4, (Object) null);
                Unit unit2222222222 = Unit.a;
                break;
        }
        i iVar = new i((Integer) rVar.f6259e, (Integer) rVar.f6260i, (Integer) rVar.f6261v, null, (Integer) rVar.f6262w, null);
        Intrinsics.checkNotNullExpressionValue(iVar, "build(...)");
        return iVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final AgeSignalsAccessResult fakeAccessResult(int i5) {
        qh.h hVar = new qh.h(Integer.valueOf(i5));
        Intrinsics.checkNotNullExpressionValue(hVar, "build(...)");
        return hVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final WritableMap statusOnlyMap(Integer num) {
        WritableMap createMap = Arguments.createMap();
        if (num != null) {
            createMap.putInt("ageSignalsStatus", num.intValue());
        }
        return createMap;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final WritableMap toWritableMap(AgeSignalsResult ageSignalsResult) {
        WritableMap statusOnlyMap = statusOnlyMap(1);
        Integer b10 = ageSignalsResult.b();
        if (b10 != null) {
            statusOnlyMap.putInt("ageRangeSource", b10.intValue());
        }
        Integer a = ageSignalsResult.a();
        if (a != null) {
            statusOnlyMap.putInt("ageLower", a.intValue());
        }
        Integer c6 = ageSignalsResult.c();
        if (c6 != null) {
            statusOnlyMap.putInt("ageUpper", c6.intValue());
        }
        Integer f2 = ageSignalsResult.f();
        if (f2 != null) {
            statusOnlyMap.putInt("significantChangeStatus", f2.intValue());
        }
        if (ageSignalsResult.e() != null) {
            statusOnlyMap.putDouble("significantChangeApprovalDate", r1.getTime());
        }
        String d6 = ageSignalsResult.d();
        if (d6 != null) {
            statusOnlyMap.putString("installId", d6);
        }
        return statusOnlyMap;
    }
}
