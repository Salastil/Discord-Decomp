package com.discord.chat.bridge.contentnode;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.rolecolors.RoleColors;
import com.discord.chat.bridge.rolecolors.RoleColors$$serializer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ds.r;
import fo.d;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/LinkContentNode.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/LinkContentNode;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/LinkContentNode;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/LinkContentNode;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LinkContentNode$$serializer implements h0 {

    @NotNull
    public static final LinkContentNode$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        LinkContentNode$$serializer linkContentNode$$serializer = new LinkContentNode$$serializer();
        INSTANCE = linkContentNode$$serializer;
        j1 j1Var = new j1("link", linkContentNode$$serializer, 10);
        j1Var.k("content", false);
        j1Var.k("target", false);
        j1Var.k("linkColor", true);
        j1Var.k("roleColors", true);
        j1Var.k("bindUserMenuRoleColor", true);
        j1Var.k("shouldShowRoleDot", true);
        j1Var.k("displayNameFontId", true);
        j1Var.k("medium", true);
        j1Var.k("url", true);
        j1Var.k("isUrl", true);
        descriptor = j1Var;
    }

    private LinkContentNode$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = LinkContentNode.$childSerializers;
        o0 o0Var = o0.a;
        g gVar = g.a;
        return new KSerializer[]{lazyArr[0].getValue(), e.o(LinkContextDataSerializer.INSTANCE), e.o(o0Var), e.o(RoleColors$$serializer.INSTANCE), e.o(o0Var), e.o(gVar), e.o(o0Var), e.o(gVar), e.o(v1.a), gVar};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final LinkContentNode deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        boolean z5;
        String str;
        Boolean bool;
        Integer num;
        Integer num2;
        Boolean bool2;
        RoleColors roleColors;
        Integer num3;
        LinkContextData linkContextData;
        int i5;
        List list;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = LinkContentNode.$childSerializers;
        int i6 = 9;
        if (beginStructure.decodeSequentially()) {
            List list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 0, (DeserializationStrategy) lazyArr[0].getValue(), null);
            LinkContextData linkContextData2 = (LinkContextData) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, LinkContextDataSerializer.INSTANCE, null);
            o0 o0Var = o0.a;
            Integer num4 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0Var, null);
            RoleColors roleColors2 = (RoleColors) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, RoleColors$$serializer.INSTANCE, null);
            Integer num5 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0Var, null);
            g gVar = g.a;
            Boolean bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, gVar, null);
            Integer num6 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, o0Var, null);
            Boolean bool4 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, gVar, null);
            String str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1.a, null);
            list = list2;
            linkContextData = linkContextData2;
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
            bool = bool4;
            num = num6;
            bool2 = bool3;
            roleColors = roleColors2;
            str = str2;
            num2 = num5;
            num3 = num4;
            i5 = 1023;
        } else {
            boolean z6 = true;
            boolean z7 = false;
            String str3 = null;
            Boolean bool5 = null;
            Integer num7 = null;
            Integer num8 = null;
            Boolean bool6 = null;
            RoleColors roleColors3 = null;
            Integer num9 = null;
            List list3 = null;
            int i10 = 0;
            LinkContextData linkContextData3 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i6 = 9;
                    case 0:
                        list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 0, (DeserializationStrategy) lazyArr[0].getValue(), list3);
                        i10 |= 1;
                        i6 = 9;
                    case 1:
                        linkContextData3 = (LinkContextData) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, LinkContextDataSerializer.INSTANCE, linkContextData3);
                        i10 |= 2;
                        i6 = 9;
                    case 2:
                        num9 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0.a, num9);
                        i10 |= 4;
                        i6 = 9;
                    case 3:
                        roleColors3 = (RoleColors) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, RoleColors$$serializer.INSTANCE, roleColors3);
                        i10 |= 8;
                        i6 = 9;
                    case 4:
                        num8 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, num8);
                        i10 |= 16;
                        i6 = 9;
                    case 5:
                        bool6 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, g.a, bool6);
                        i10 |= 32;
                        i6 = 9;
                    case 6:
                        num7 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, o0.a, num7);
                        i10 |= 64;
                        i6 = 9;
                    case 7:
                        bool5 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, g.a, bool5);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i6 = 9;
                    case 8:
                        str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1.a, str3);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i6 = 9;
                    case 9:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, i6);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            z5 = z7;
            str = str3;
            bool = bool5;
            num = num7;
            num2 = num8;
            bool2 = bool6;
            roleColors = roleColors3;
            num3 = num9;
            linkContextData = linkContextData3;
            i5 = i10;
            list = list3;
        }
        beginStructure.endStructure(serialDescriptor);
        return new LinkContentNode(i5, list, linkContextData, num3, roleColors, num2, bool2, num, bool, str, z5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull LinkContentNode value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        LinkContentNode.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
