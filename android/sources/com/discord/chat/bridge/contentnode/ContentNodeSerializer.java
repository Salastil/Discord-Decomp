package com.discord.chat.bridge.contentnode;

import com.facebook.imagepipeline.nativecode.c;
import cs.g;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.SealedClassSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonPrimitive;
import org.jetbrains.annotations.NotNull;
import zr.e;

@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u0010\u0010\u0005\u001a\u00020\u00022\u0006\u0010\u0006\u001a\u00020\u0007H\u0016J\u0018\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u0002H\u0016R\u0014\u0010\r\u001a\u00020\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010¨\u0006\u0011"}, d2 = {"Lcom/discord/chat/bridge/contentnode/ContentNodeSerializer;", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/contentnode/ContentNode;", "<init>", "()V", "deserialize", "decoder", "Lkotlinx/serialization/encoding/Decoder;", "serialize", "", "encoder", "Lkotlinx/serialization/encoding/Encoder;", "value", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ContentNodeSerializer implements KSerializer {

    @NotNull
    public static final ContentNodeSerializer INSTANCE = new ContentNodeSerializer();

    private ContentNodeSerializer() {
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public SerialDescriptor getDescriptor() {
        return c.a("ContentNode", e.B);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public ContentNode deserialize(@NotNull Decoder decoder) {
        SealedClassSerializer sealedClassSerializer;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        try {
            if (!(decoder instanceof g)) {
                throw new IllegalArgumentException("Failed requirement.");
            }
            JsonElement a = ((g) decoder).a();
            if (a instanceof JsonPrimitive) {
                return new TextContentNode(((JsonPrimitive) a).a());
            }
            Json b10 = ((g) decoder).b();
            sealedClassSerializer = ContentNodeKt.sealedClassSerializer;
            return (ContentNode) b10.a(sealedClassSerializer, a);
        } catch (Exception e9) {
            return new ErrorContentNode(e9);
        }
    }

    @Override // kotlinx.serialization.KSerializer
    public void serialize(@NotNull Encoder encoder, @NotNull ContentNode value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        throw new UnsupportedOperationException();
    }
}
