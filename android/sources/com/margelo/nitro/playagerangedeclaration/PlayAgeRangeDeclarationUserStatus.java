package com.margelo.nitro.playagerangedeclaration;

import androidx.annotation.Keep;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Keep
@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\u0010\b\n\u0002\b\u000e\b\u0087\u0081\u0002\u0018\u0000 \t2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\nB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005R\u001a\u0010\u0003\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u0006\u001a\u0004\b\u0007\u0010\bj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000f¨\u0006\u0010"}, d2 = {"Lcom/margelo/nitro/playagerangedeclaration/PlayAgeRangeDeclarationUserStatus;", "", "", "value", "<init>", "(Ljava/lang/String;II)V", "I", "getValue", "()I", "Companion", "com/margelo/nitro/playagerangedeclaration/h", "VERIFIED", "SUPERVISED", "SUPERVISED_APPROVAL_PENDING", "SUPERVISED_APPROVAL_DENIED", "UNKNOWN", "react-native-play-age-range-declaration_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ya.a
/* loaded from: classes3.dex */
public final class PlayAgeRangeDeclarationUserStatus {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ PlayAgeRangeDeclarationUserStatus[] $VALUES;

    @NotNull
    public static final h Companion;

    @Keep
    @ya.a
    private final int value;
    public static final PlayAgeRangeDeclarationUserStatus VERIFIED = new PlayAgeRangeDeclarationUserStatus("VERIFIED", 0, 0);
    public static final PlayAgeRangeDeclarationUserStatus SUPERVISED = new PlayAgeRangeDeclarationUserStatus("SUPERVISED", 1, 1);
    public static final PlayAgeRangeDeclarationUserStatus SUPERVISED_APPROVAL_PENDING = new PlayAgeRangeDeclarationUserStatus("SUPERVISED_APPROVAL_PENDING", 2, 2);
    public static final PlayAgeRangeDeclarationUserStatus SUPERVISED_APPROVAL_DENIED = new PlayAgeRangeDeclarationUserStatus("SUPERVISED_APPROVAL_DENIED", 3, 3);
    public static final PlayAgeRangeDeclarationUserStatus UNKNOWN = new PlayAgeRangeDeclarationUserStatus("UNKNOWN", 4, 4);

    private static final /* synthetic */ PlayAgeRangeDeclarationUserStatus[] $values() {
        return new PlayAgeRangeDeclarationUserStatus[]{VERIFIED, SUPERVISED, SUPERVISED_APPROVAL_PENDING, SUPERVISED_APPROVAL_DENIED, UNKNOWN};
    }

    static {
        PlayAgeRangeDeclarationUserStatus[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        Companion = new h();
    }

    private PlayAgeRangeDeclarationUserStatus(String str, int i5, int i6) {
        this.value = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static PlayAgeRangeDeclarationUserStatus valueOf(String str) {
        return (PlayAgeRangeDeclarationUserStatus) Enum.valueOf(PlayAgeRangeDeclarationUserStatus.class, str);
    }

    public static PlayAgeRangeDeclarationUserStatus[] values() {
        return (PlayAgeRangeDeclarationUserStatus[]) $VALUES.clone();
    }

    public final int getValue() {
        return this.value;
    }
}
