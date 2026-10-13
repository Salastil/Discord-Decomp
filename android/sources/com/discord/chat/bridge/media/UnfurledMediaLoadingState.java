package com.discord.chat.bridge.media;

import com.discord.serialization.IntEnum;
import com.discord.serialization.IntEnumSerializer;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.KSerializer;
import org.jetbrains.annotations.NotNull;
import xr.e;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@e(with = Serializer.class)
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\u000b\b\u0087\u0081\u0002\u0018\u0000 \u000e2\u00020\u00012\b\u0012\u0004\u0012\u00020\u00000\u0002:\u0002\r\u000eB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\f¨\u0006\u000f"}, d2 = {"Lcom/discord/chat/bridge/media/UnfurledMediaLoadingState;", "Lcom/discord/serialization/IntEnum;", "", "serialNumber", "", "<init>", "(Ljava/lang/String;II)V", "getSerialNumber", "()I", "UNKNOWN", "LOADING", "LOADED_SUCCESS", "LOADED_NOT_FOUND", "Serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class UnfurledMediaLoadingState implements IntEnum {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ UnfurledMediaLoadingState[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    private final int serialNumber;
    public static final UnfurledMediaLoadingState UNKNOWN = new UnfurledMediaLoadingState("UNKNOWN", 0, 0);
    public static final UnfurledMediaLoadingState LOADING = new UnfurledMediaLoadingState("LOADING", 1, 1);
    public static final UnfurledMediaLoadingState LOADED_SUCCESS = new UnfurledMediaLoadingState("LOADED_SUCCESS", 2, 2);
    public static final UnfurledMediaLoadingState LOADED_NOT_FOUND = new UnfurledMediaLoadingState("LOADED_NOT_FOUND", 3, 3);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/media/UnfurledMediaLoadingState$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/media/UnfurledMediaLoadingState;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return Serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/discord/chat/bridge/media/UnfurledMediaLoadingState$Serializer;", "Lcom/discord/serialization/IntEnumSerializer;", "Lcom/discord/chat/bridge/media/UnfurledMediaLoadingState;", "<init>", "()V", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Serializer extends IntEnumSerializer<UnfurledMediaLoadingState> {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        private Serializer() {
            super(Reflection.getOrCreateKotlinClass(UnfurledMediaLoadingState.class), UnfurledMediaLoadingState.UNKNOWN);
        }
    }

    private static final /* synthetic */ UnfurledMediaLoadingState[] $values() {
        return new UnfurledMediaLoadingState[]{UNKNOWN, LOADING, LOADED_SUCCESS, LOADED_NOT_FOUND};
    }

    static {
        UnfurledMediaLoadingState[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private UnfurledMediaLoadingState(String str, int i5, int i6) {
        this.serialNumber = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static UnfurledMediaLoadingState valueOf(String str) {
        return (UnfurledMediaLoadingState) Enum.valueOf(UnfurledMediaLoadingState.class, str);
    }

    public static UnfurledMediaLoadingState[] values() {
        return (UnfurledMediaLoadingState[]) $VALUES.clone();
    }

    @Override // com.discord.serialization.IntEnum
    public int getSerialNumber() {
        return this.serialNumber;
    }
}
