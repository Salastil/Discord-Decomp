package com.discord.chat.reactevents;

import bs.d0;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import fo.l;
import fo.m;
import java.lang.annotation.Annotation;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlinx.serialization.KSerializer;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\bÇ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00000\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/chat/reactevents/TapSuppressNotificationsIconData;", "Lcom/discord/reactevents/ReactEvent;", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class TapSuppressNotificationsIconData implements ReactEvent {

    @NotNull
    public static final TapSuppressNotificationsIconData INSTANCE = new TapSuppressNotificationsIconData();
    private static final /* synthetic */ Lazy $cachedSerializer$delegate = l.b(m.f8827e, new a(2));

    private TapSuppressNotificationsIconData() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _init_$_anonymous_() {
        return new d0("com.discord.chat.reactevents.TapSuppressNotificationsIconData", INSTANCE, new Annotation[0]);
    }

    private final /* synthetic */ KSerializer get$cachedSerializer() {
        return (KSerializer) $cachedSerializer$delegate.getValue();
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public final KSerializer serializer() {
        return get$cachedSerializer();
    }
}
