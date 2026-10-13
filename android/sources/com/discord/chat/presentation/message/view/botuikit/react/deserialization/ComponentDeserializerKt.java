package com.discord.chat.presentation.message.view.botuikit.react.deserialization;

import a3.e;
import com.discord.chat.bridge.botuikit.Component;
import com.discord.chat.bridge.botuikit.ComponentSerializer;
import cs.h;
import cs.p;
import d9.a;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonBuilder;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\u001a\"\u0010\u0004\u001a\u0002H\u0005\"\n\b\u0000\u0010\u0005\u0018\u0001*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0080\b¢\u0006\u0002\u0010\t\"\u0011\u0010\u0000\u001a\u00020\u0001¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0003¨\u0006\n"}, d2 = {"json", "Lkotlinx/serialization/json/Json;", "getJson", "()Lkotlinx/serialization/json/Json;", "deserializeComponentModel", "T", "Lcom/discord/chat/bridge/botuikit/Component;", "model", "", "(Ljava/lang/String;)Lcom/discord/chat/bridge/botuikit/Component;", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ComponentDeserializerKt {

    @NotNull
    private static final Json json = a.c(new p(25));

    public static final <T extends Component> T deserializeComponentModel(String model) {
        String e9;
        String str;
        Intrinsics.checkNotNullParameter(model, "model");
        try {
            T t5 = (T) getJson().b(ComponentSerializer.INSTANCE, model);
            Intrinsics.reifiedOperationMarker(3, "T");
            if (t5 != null) {
                return t5;
            }
            Intrinsics.reifiedOperationMarker(4, "T");
            throw new IllegalStateException(("Expected " + Reflection.getOrCreateKotlinClass(Component.class).getSimpleName() + " but got " + Reflection.getOrCreateKotlinClass(t5.getClass()).getSimpleName()).toString());
        } catch (Exception e10) {
            try {
                JsonObject j = h.j(getJson().d(model));
                Set keySet = j.f13610d.keySet();
                JsonElement jsonElement = (JsonElement) j.get("type");
                if (jsonElement == null || (str = h.k(jsonElement).a()) == null) {
                    str = "undefined";
                }
                e9 = "keys: " + keySet + ", type: " + str;
            } catch (Exception unused) {
                e9 = s4.h.e(model.length(), "unparseable JSON of ", " chars");
            }
            Intrinsics.reifiedOperationMarker(4, "T");
            StringBuilder t10 = e.t("Error while deserializing ", Reflection.getOrCreateKotlinClass(Component.class).getSimpleName(), ": ", e10.getMessage(), ".\nReceived ");
            t10.append(e9);
            throw new IllegalStateException(t10.toString().toString());
        }
    }

    @NotNull
    public static final Json getJson() {
        return json;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit json$lambda$0(JsonBuilder Json) {
        Intrinsics.checkNotNullParameter(Json, "$this$Json");
        Json.f13609b = true;
        return Unit.a;
    }
}
