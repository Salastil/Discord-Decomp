package com.discord.chat.bridge.executedcommand;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableText;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableTextSerializer;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/executedcommand/ExecutedCommand.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/executedcommand/ExecutedCommand;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/executedcommand/ExecutedCommand;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/executedcommand/ExecutedCommand;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ExecutedCommand$$serializer implements h0 {

    @NotNull
    public static final ExecutedCommand$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ExecutedCommand$$serializer executedCommand$$serializer = new ExecutedCommand$$serializer();
        INSTANCE = executedCommand$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.executedcommand.ExecutedCommand", executedCommand$$serializer, 9);
        j1Var.k("userId", false);
        j1Var.k(NotificationRenderer.USERNAME, false);
        j1Var.k("usernameColor", false);
        j1Var.k("avatarURL", true);
        j1Var.k("targetUsernameColor", false);
        j1Var.k("content", false);
        j1Var.k("commandNameBackgroundStyles", true);
        j1Var.k("showAppsIcon", true);
        j1Var.k("showControllerIcon", true);
        descriptor = j1Var;
    }

    private ExecutedCommand$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        KSerializer o7 = e.o(ExecutedCommandBackgroundStyles$$serializer.INSTANCE);
        g gVar = g.a;
        KSerializer o10 = e.o(gVar);
        KSerializer o11 = e.o(gVar);
        o0 o0Var = o0.a;
        return new KSerializer[]{UserId$$serializer.INSTANCE, v1Var, o0Var, o6, o0Var, AnnotatedStructurableTextSerializer.INSTANCE, o7, o10, o11};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ExecutedCommand deserialize(@NotNull Decoder decoder) {
        int i5;
        Boolean bool;
        Boolean bool2;
        ExecutedCommandBackgroundStyles executedCommandBackgroundStyles;
        AnnotatedStructurableText annotatedStructurableText;
        String str;
        int i6;
        int i10;
        UserId userId;
        String str2;
        char c6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i11 = 7;
        int i12 = 6;
        if (beginStructure.decodeSequentially()) {
            UserId userId2 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 0, UserId$$serializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 2);
            String str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, null);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 4);
            AnnotatedStructurableText annotatedStructurableText2 = (AnnotatedStructurableText) beginStructure.decodeSerializableElement(serialDescriptor, 5, AnnotatedStructurableTextSerializer.INSTANCE, null);
            ExecutedCommandBackgroundStyles executedCommandBackgroundStyles2 = (ExecutedCommandBackgroundStyles) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, ExecutedCommandBackgroundStyles$$serializer.INSTANCE, null);
            g gVar = g.a;
            userId = userId2;
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, gVar, null);
            executedCommandBackgroundStyles = executedCommandBackgroundStyles2;
            annotatedStructurableText = annotatedStructurableText2;
            str = str3;
            bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, gVar, null);
            i5 = decodeIntElement2;
            i6 = decodeIntElement;
            str2 = decodeStringElement;
            i10 = 511;
        } else {
            boolean z5 = true;
            int i13 = 0;
            int i14 = 0;
            Boolean bool3 = null;
            Boolean bool4 = null;
            ExecutedCommandBackgroundStyles executedCommandBackgroundStyles3 = null;
            AnnotatedStructurableText annotatedStructurableText3 = null;
            UserId userId3 = null;
            String str4 = null;
            int i15 = 0;
            String str5 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i12 = 6;
                    case 0:
                        userId3 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 0, UserId$$serializer.INSTANCE, userId3);
                        i14 |= 1;
                        i11 = 7;
                        i12 = 6;
                    case 1:
                        i14 |= 2;
                        str4 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i11 = 7;
                        i12 = 6;
                    case 2:
                        i15 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i14 |= 4;
                        i11 = 7;
                        i12 = 6;
                    case 3:
                        str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str5);
                        i14 |= 8;
                        i11 = 7;
                        i12 = 6;
                    case 4:
                        c6 = 5;
                        i13 = beginStructure.decodeIntElement(serialDescriptor, 4);
                        i14 |= 16;
                        i11 = 7;
                    case 5:
                        c6 = 5;
                        annotatedStructurableText3 = (AnnotatedStructurableText) beginStructure.decodeSerializableElement(serialDescriptor, 5, AnnotatedStructurableTextSerializer.INSTANCE, annotatedStructurableText3);
                        i14 |= 32;
                        i11 = 7;
                    case 6:
                        executedCommandBackgroundStyles3 = (ExecutedCommandBackgroundStyles) beginStructure.decodeNullableSerializableElement(serialDescriptor, i12, ExecutedCommandBackgroundStyles$$serializer.INSTANCE, executedCommandBackgroundStyles3);
                        i14 |= 64;
                    case 7:
                        bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, g.a, bool3);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        bool4 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, g.a, bool4);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i13;
            bool = bool3;
            bool2 = bool4;
            executedCommandBackgroundStyles = executedCommandBackgroundStyles3;
            annotatedStructurableText = annotatedStructurableText3;
            str = str5;
            i6 = i15;
            i10 = i14;
            userId = userId3;
            str2 = str4;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ExecutedCommand(i10, userId, str2, i6, str, i5, annotatedStructurableText, executedCommandBackgroundStyles, bool, bool2, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ExecutedCommand value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ExecutedCommand.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
