package com.margelo.nitro.playagerangedeclaration;

import com.google.android.play.agesignals.AgeSignalsResult;
import fo.q;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import nr.j;

/* loaded from: classes3.dex */
public final class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6524d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ j f6525e;

    public /* synthetic */ c(j jVar, int i5) {
        this.f6524d = i5;
        this.f6525e = jVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x006d  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x007f  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0078  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0061  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(AgeSignalsResult ageSignalsResult) {
        PlayAgeRangeDeclarationUserStatus playAgeRangeDeclarationUserStatus;
        PlayAgeRangeDeclarationUserStatus playAgeRangeDeclarationUserStatus2;
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd", Locale.US);
        Date mostRecentApprovalDate = ageSignalsResult.mostRecentApprovalDate();
        String format = mostRecentApprovalDate != null ? simpleDateFormat.format(mostRecentApprovalDate) : null;
        Integer userStatus = ageSignalsResult.userStatus();
        if (userStatus != null && userStatus.intValue() == 0) {
            playAgeRangeDeclarationUserStatus2 = PlayAgeRangeDeclarationUserStatus.VERIFIED;
        } else if (userStatus != null && userStatus.intValue() == 1) {
            playAgeRangeDeclarationUserStatus2 = PlayAgeRangeDeclarationUserStatus.SUPERVISED;
        } else if (userStatus != null && userStatus.intValue() == 2) {
            playAgeRangeDeclarationUserStatus2 = PlayAgeRangeDeclarationUserStatus.SUPERVISED_APPROVAL_PENDING;
        } else if (userStatus != null && userStatus.intValue() == 3) {
            playAgeRangeDeclarationUserStatus2 = PlayAgeRangeDeclarationUserStatus.SUPERVISED_APPROVAL_DENIED;
        } else {
            if (userStatus == null || userStatus.intValue() != 4) {
                playAgeRangeDeclarationUserStatus = null;
                PlayAgeRangeDeclarationResult playAgeRangeDeclarationResult = new PlayAgeRangeDeclarationResult(playAgeRangeDeclarationUserStatus != null, ageSignalsResult.d(), playAgeRangeDeclarationUserStatus, null, ageSignalsResult.a() == null ? Double.valueOf(r0.intValue()) : null, ageSignalsResult.c() != null ? Double.valueOf(r12.intValue()) : null, format);
                q qVar = Result.f13476e;
                this.f6525e.resumeWith(playAgeRangeDeclarationResult);
            }
            playAgeRangeDeclarationUserStatus2 = PlayAgeRangeDeclarationUserStatus.UNKNOWN;
        }
        playAgeRangeDeclarationUserStatus = playAgeRangeDeclarationUserStatus2;
        if (ageSignalsResult.a() == null) {
        }
        PlayAgeRangeDeclarationResult playAgeRangeDeclarationResult2 = new PlayAgeRangeDeclarationResult(playAgeRangeDeclarationUserStatus != null, ageSignalsResult.d(), playAgeRangeDeclarationUserStatus, null, ageSignalsResult.a() == null ? Double.valueOf(r0.intValue()) : null, ageSignalsResult.c() != null ? Double.valueOf(r12.intValue()) : null, format);
        q qVar2 = Result.f13476e;
        this.f6525e.resumeWith(playAgeRangeDeclarationResult2);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f6524d) {
            case 0:
                a((AgeSignalsResult) obj);
                return Unit.a;
            default:
                q qVar = Result.f13476e;
                Unit unit = Unit.a;
                this.f6525e.resumeWith(unit);
                return unit;
        }
    }
}
