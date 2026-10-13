package com.discord.key_commands;

import android.view.KeyEvent;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0010\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0014\u0010\u000f\u001a\u00020\n2\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005J\u0006\u0010\u0010\u001a\u00020\nJ\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0007R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R(\u0010\u0007\u001a\u0010\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\n\u0018\u00010\bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\f\"\u0004\b\r\u0010\u000e¨\u0006\u0015"}, d2 = {"Lcom/discord/key_commands/KeyCommandsRegistry;", "", "<init>", "()V", "keyCommands", "", "Lcom/discord/key_commands/KeyCommandDescriptor;", "onKeyCommand", "Lkotlin/Function1;", "", "", "getOnKeyCommand", "()Lkotlin/jvm/functions/Function1;", "setOnKeyCommand", "(Lkotlin/jvm/functions/Function1;)V", "updateKeyCommands", "removeAllKeyCommands", "handleKeyEvent", "", "event", "Landroid/view/KeyEvent;", "key_commands_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nKeyCommandsRegistry.kt\nKotlin\n*S Kotlin\n*F\n+ 1 KeyCommandsRegistry.kt\ncom/discord/key_commands/KeyCommandsRegistry\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,32:1\n295#2,2:33\n*S KotlinDebug\n*F\n+ 1 KeyCommandsRegistry.kt\ncom/discord/key_commands/KeyCommandsRegistry\n*L\n27#1:33,2\n*E\n"})
/* loaded from: classes.dex */
public final class KeyCommandsRegistry {

    @NotNull
    public static final KeyCommandsRegistry INSTANCE = new KeyCommandsRegistry();

    @NotNull
    private static volatile List<KeyCommandDescriptor> keyCommands = m0.f13512d;
    private static volatile Function1<? super String, Unit> onKeyCommand;

    private KeyCommandsRegistry() {
    }

    public final Function1<String, Unit> getOnKeyCommand() {
        return onKeyCommand;
    }

    public final boolean handleKeyEvent(@NotNull KeyEvent event) {
        Object obj;
        Intrinsics.checkNotNullParameter(event, "event");
        if (event.getAction() != 0 || event.getRepeatCount() > 0) {
            return false;
        }
        Iterator<T> it = keyCommands.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (((KeyCommandDescriptor) obj).matches(event)) {
                break;
            }
        }
        KeyCommandDescriptor keyCommandDescriptor = (KeyCommandDescriptor) obj;
        if (keyCommandDescriptor == null) {
            return false;
        }
        Function1<? super String, Unit> function1 = onKeyCommand;
        if (function1 == null) {
            return true;
        }
        function1.invoke(keyCommandDescriptor.getEventName());
        return true;
    }

    public final void removeAllKeyCommands() {
        keyCommands = m0.f13512d;
    }

    public final void setOnKeyCommand(Function1<? super String, Unit> function1) {
        onKeyCommand = function1;
    }

    public final void updateKeyCommands(@NotNull List<KeyCommandDescriptor> keyCommands2) {
        Intrinsics.checkNotNullParameter(keyCommands2, "keyCommands");
        keyCommands = keyCommands2;
    }
}
