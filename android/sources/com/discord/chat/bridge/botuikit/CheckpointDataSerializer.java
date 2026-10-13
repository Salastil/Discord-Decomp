package com.discord.chat.bridge.botuikit;

import cs.f;
import cs.h;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonPrimitive;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u0005H\u0014¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointDataSerializer;", "Lcs/f;", "Lcom/discord/chat/bridge/botuikit/CheckpointData;", "<init>", "()V", "Lkotlinx/serialization/json/JsonElement;", "element", "Lkotlinx/serialization/DeserializationStrategy;", "selectDeserializer", "(Lkotlinx/serialization/json/JsonElement;)Lkotlinx/serialization/DeserializationStrategy;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CheckpointDataSerializer extends f {

    @NotNull
    public static final CheckpointDataSerializer INSTANCE = new CheckpointDataSerializer();

    private CheckpointDataSerializer() {
        super(Reflection.getOrCreateKotlinClass(CheckpointData.class));
    }

    @Override // cs.f
    @NotNull
    public DeserializationStrategy selectDeserializer(@NotNull JsonElement element) {
        JsonElement jsonElement;
        Intrinsics.checkNotNullParameter(element, "element");
        JsonObject jsonObject = element instanceof JsonObject ? (JsonObject) element : null;
        if (jsonObject == null || (jsonElement = (JsonElement) jsonObject.get("version")) == null) {
            return CheckpointDataUnknown.INSTANCE.serializer();
        }
        JsonPrimitive jsonPrimitive = jsonElement instanceof JsonPrimitive ? (JsonPrimitive) jsonElement : null;
        Integer h6 = jsonPrimitive != null ? h.h(jsonPrimitive) : null;
        int value = CheckpointVersion.V2025.getValue();
        if (h6 != null && h6.intValue() == value) {
            return CheckpointDataV2025.INSTANCE.serializer();
        }
        return (h6 != null && h6.intValue() == CheckpointVersion.V2026.getValue()) ? CheckpointDataV2026.INSTANCE.serializer() : CheckpointDataUnknown.INSTANCE.serializer();
    }
}
