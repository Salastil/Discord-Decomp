package com.margelo.nitro.playagerangedeclaration;

import androidx.annotation.Keep;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Keep
@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\u0010\b\n\u0002\b\u0013\b\u0087\u0081\u0002\u0018\u0000 \t2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\nB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005R\u001a\u0010\u0003\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u0006\u001a\u0004\b\u0007\u0010\bj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014¨\u0006\u0015"}, d2 = {"Lcom/margelo/nitro/playagerangedeclaration/AppleAgeRangeDeclarationUserStatusValues;", "", "", "value", "<init>", "(Ljava/lang/String;II)V", "I", "getValue", "()I", "Companion", "com/margelo/nitro/playagerangedeclaration/a", "CHECKEDBYOTHERMETHOD", "GOVERNMENTIDCHECKED", "GUARDIANCHECKEDBYOTHERMETHOD", "GUARDIANDECLARED", "GUARDIANGOVERNMENTIDCHECKED", "GUARDIANPAYMENTCHECKED", "PAYMENTCHECKED", "SELFDECLARED", "DECLINED", "UNKNOWN", "react-native-play-age-range-declaration_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ya.a
/* loaded from: classes3.dex */
public final class AppleAgeRangeDeclarationUserStatusValues {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ AppleAgeRangeDeclarationUserStatusValues[] $VALUES;

    @NotNull
    public static final a Companion;

    @Keep
    @ya.a
    private final int value;
    public static final AppleAgeRangeDeclarationUserStatusValues CHECKEDBYOTHERMETHOD = new AppleAgeRangeDeclarationUserStatusValues("CHECKEDBYOTHERMETHOD", 0, 0);
    public static final AppleAgeRangeDeclarationUserStatusValues GOVERNMENTIDCHECKED = new AppleAgeRangeDeclarationUserStatusValues("GOVERNMENTIDCHECKED", 1, 1);
    public static final AppleAgeRangeDeclarationUserStatusValues GUARDIANCHECKEDBYOTHERMETHOD = new AppleAgeRangeDeclarationUserStatusValues("GUARDIANCHECKEDBYOTHERMETHOD", 2, 2);
    public static final AppleAgeRangeDeclarationUserStatusValues GUARDIANDECLARED = new AppleAgeRangeDeclarationUserStatusValues("GUARDIANDECLARED", 3, 3);
    public static final AppleAgeRangeDeclarationUserStatusValues GUARDIANGOVERNMENTIDCHECKED = new AppleAgeRangeDeclarationUserStatusValues("GUARDIANGOVERNMENTIDCHECKED", 4, 4);
    public static final AppleAgeRangeDeclarationUserStatusValues GUARDIANPAYMENTCHECKED = new AppleAgeRangeDeclarationUserStatusValues("GUARDIANPAYMENTCHECKED", 5, 5);
    public static final AppleAgeRangeDeclarationUserStatusValues PAYMENTCHECKED = new AppleAgeRangeDeclarationUserStatusValues("PAYMENTCHECKED", 6, 6);
    public static final AppleAgeRangeDeclarationUserStatusValues SELFDECLARED = new AppleAgeRangeDeclarationUserStatusValues("SELFDECLARED", 7, 7);
    public static final AppleAgeRangeDeclarationUserStatusValues DECLINED = new AppleAgeRangeDeclarationUserStatusValues("DECLINED", 8, 8);
    public static final AppleAgeRangeDeclarationUserStatusValues UNKNOWN = new AppleAgeRangeDeclarationUserStatusValues("UNKNOWN", 9, 9);

    private static final /* synthetic */ AppleAgeRangeDeclarationUserStatusValues[] $values() {
        return new AppleAgeRangeDeclarationUserStatusValues[]{CHECKEDBYOTHERMETHOD, GOVERNMENTIDCHECKED, GUARDIANCHECKEDBYOTHERMETHOD, GUARDIANDECLARED, GUARDIANGOVERNMENTIDCHECKED, GUARDIANPAYMENTCHECKED, PAYMENTCHECKED, SELFDECLARED, DECLINED, UNKNOWN};
    }

    static {
        AppleAgeRangeDeclarationUserStatusValues[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        Companion = new a();
    }

    private AppleAgeRangeDeclarationUserStatusValues(String str, int i5, int i6) {
        this.value = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static AppleAgeRangeDeclarationUserStatusValues valueOf(String str) {
        return (AppleAgeRangeDeclarationUserStatusValues) Enum.valueOf(AppleAgeRangeDeclarationUserStatusValues.class, str);
    }

    public static AppleAgeRangeDeclarationUserStatusValues[] values() {
        return (AppleAgeRangeDeclarationUserStatusValues[]) $VALUES.clone();
    }

    public final int getValue() {
        return this.value;
    }
}
