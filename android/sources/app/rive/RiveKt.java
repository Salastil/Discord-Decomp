package app.rive;

import android.graphics.Bitmap;
import app.rive.core.RiveSurface;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import com.google.firebase.messaging.p;
import g0.d;
import g0.g;
import g0.h;
import g0.i;
import g0.j;
import g0.l;
import g0.m;
import g0.n;
import g0.o;
import g0.s;
import g0.t;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.n0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import u.c;
import u.k;
import u.x;
import w3.q;
import z.f;

@Metadata(d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0006\u001a\u008f\u0001\u0010\u0018\u001a\u00020\u00162\u0006\u0010\u0001\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u00022\b\b\u0002\u0010\u0005\u001a\u00020\u00042\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\n2\b\b\u0002\u0010\r\u001a\u00020\f2\b\b\u0002\u0010\u000f\u001a\u00020\u000e2\b\b\u0002\u0010\u0011\u001a\u00020\u00102 \b\u0002\u0010\u0017\u001a\u001a\u0012\u000e\u0012\f\u0012\u0004\u0012\u00020\u00140\u0013j\u0002`\u0015\u0012\u0004\u0012\u00020\u0016\u0018\u00010\u0012H\u0007¢\u0006\u0004\b\u0018\u0010\u0019\"\u0014\u0010\u001b\u001a\u00020\u001a8\u0002X\u0082T¢\u0006\u0006\n\u0004\b\u001b\u0010\u001c\"\u0014\u0010\u001d\u001a\u00020\u001a8\u0002X\u0082T¢\u0006\u0006\n\u0004\b\u001d\u0010\u001c\"\u0014\u0010\u001e\u001a\u00020\u001a8\u0002X\u0082T¢\u0006\u0006\n\u0004\b\u001e\u0010\u001c*\u0016\u0010\u001f\"\b\u0012\u0004\u0012\u00020\u00140\u00132\b\u0012\u0004\u0012\u00020\u00140\u0013¨\u0006'²\u0006\u000e\u0010 \u001a\u00020\u00048\n@\nX\u008a\u008e\u0002²\u0006\u0010\u0010\"\u001a\u0004\u0018\u00010!8\n@\nX\u008a\u008e\u0002²\u0006\u000e\u0010#\u001a\u00020\u000e8\n@\nX\u008a\u008e\u0002²\u0006\u000e\u0010$\u001a\u00020\u000e8\n@\nX\u008a\u008e\u0002²\u0006$\u0010%\u001a\u001a\u0012\u000e\u0012\f\u0012\u0004\u0012\u00020\u00140\u0013j\u0002`\u0015\u0012\u0004\u0012\u00020\u0016\u0018\u00010\u00128\nX\u008a\u0084\u0002²\u0006\u000e\u0010&\u001a\u00020\u00048\n@\nX\u008a\u008e\u0002"}, d2 = {"Lapp/rive/RiveFile;", "file", "Lz/f;", "modifier", "", "playing", "Lapp/rive/Artboard;", "artboard", "Lapp/rive/StateMachine;", "stateMachine", "Lapp/rive/ViewModelInstance;", "viewModelInstance", "Lapp/rive/Fit;", "fit", "", ViewProps.BACKGROUND_COLOR, "Lapp/rive/RivePointerInputMode;", "pointerInputMode", "Lkotlin/Function1;", "Lkotlin/Function0;", "Landroid/graphics/Bitmap;", "Lapp/rive/GetBitmapFun;", "", "onBitmapAvailable", "Rive", "(Lapp/rive/RiveFile;Lz/f;ZLapp/rive/Artboard;Lapp/rive/StateMachine;Lapp/rive/ViewModelInstance;Lapp/rive/Fit;ILapp/rive/RivePointerInputMode;Lkotlin/jvm/functions/Function1;Lu/c;II)V", "", "GENERAL_TAG", "Ljava/lang/String;", "STATE_MACHINE_TAG", "DRAW_TAG", "GetBitmapFun", "isSettled", "Lapp/rive/core/RiveSurface;", "surface", "surfaceWidth", "surfaceHeight", "currentOnBitmapAvailable", "bitmapCallbackSent", "kotlin_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nRive.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Rive.kt\napp/rive/RiveKt\n+ 2 RiveLog.kt\napp/rive/RiveLog\n+ 3 CompositionLocal.kt\nandroidx/compose/runtime/CompositionLocal\n+ 4 Composer.kt\nandroidx/compose/runtime/ComposerKt\n+ 5 SnapshotState.kt\nandroidx/compose/runtime/SnapshotStateKt__SnapshotStateKt\n+ 6 SnapshotIntState.kt\nandroidx/compose/runtime/SnapshotIntStateKt__SnapshotIntStateKt\n+ 7 Layout.kt\nandroidx/compose/ui/layout/LayoutKt\n+ 8 Composables.kt\nandroidx/compose/runtime/ComposablesKt\n+ 9 Composer.kt\nandroidx/compose/runtime/Updater\n*L\n1#1,521:1\n53#2:522\n75#3:523\n1282#4,6:524\n1282#4,6:530\n1282#4,6:536\n1282#4,6:542\n1282#4,6:548\n1282#4,6:554\n1282#4,6:560\n85#5:566\n117#5,2:567\n85#5:569\n117#5,2:570\n85#5:578\n85#5:579\n117#5,2:580\n78#6:572\n111#6,2:573\n78#6:575\n111#6,2:576\n78#7,11:582\n91#7:613\n456#8,8:593\n464#8,6:607\n4144#9,6:601\n*S KotlinDebug\n*F\n+ 1 Rive.kt\napp/rive/RiveKt\n*L\n180#1:522\n181#1:523\n192#1:524,6\n194#1:530,6\n195#1:536,6\n196#1:542,6\n199#1:548,6\n207#1:554,6\n263#1:560,6\n192#1:566\n192#1:567,2\n194#1:569\n194#1:570,2\n206#1:578\n207#1:579\n207#1:580,2\n195#1:572\n195#1:573,2\n196#1:575\n196#1:576,2\n390#1:582,11\n390#1:613\n390#1:593,8\n390#1:607,6\n390#1:601,6\n*E\n"})
/* loaded from: classes.dex */
public final class RiveKt {

    @NotNull
    private static final String DRAW_TAG = "Rive/UI/Draw";

    @NotNull
    private static final String GENERAL_TAG = "Rive/UI";

    @NotNull
    private static final String STATE_MACHINE_TAG = "Rive/UI/SM";

    public static final void Rive(@NotNull RiveFile file, f fVar, boolean z5, Artboard artboard, StateMachine stateMachine, ViewModelInstance viewModelInstance, Fit fit, int i5, RivePointerInputMode rivePointerInputMode, Function1<? super Function0<Bitmap>, Unit> function1, c cVar, int i6, int i10) {
        int i11;
        Intrinsics.checkNotNullParameter(file, "file");
        cVar.m();
        if ((i10 & 1) != 0) {
            i11 = i6 | 6;
        } else {
            if ((i6 & 14) == 0) {
                throw null;
            }
            i11 = i6;
        }
        if ((i10 & 2) != 0) {
            i11 |= 48;
        } else if ((i6 & 112) == 0) {
            throw null;
        }
        if ((i10 & 4) != 0) {
            i11 |= 384;
        } else if ((i6 & 896) == 0) {
            throw null;
        }
        if ((i10 & 8) != 0) {
            i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
        }
        if ((i10 & 16) != 0) {
            i11 |= 8192;
        }
        if ((i10 & 32) != 0) {
            i11 |= KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
        }
        if ((3670016 & i6) == 0) {
            if ((i10 & 64) == 0) {
                throw null;
            }
            i11 |= KeyCommandDescriptor.ModifierFlags.ALTERNATE;
        }
        if ((i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            i11 |= 12582912;
        } else if ((29360128 & i6) == 0) {
            throw null;
        }
        if ((i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            i11 |= 100663296;
        } else if ((234881024 & i6) == 0) {
            throw null;
        }
        if ((i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
            i11 |= 805306368;
        } else if ((1879048192 & i6) == 0) {
            throw null;
        }
        if ((i10 & 56) != 56) {
            throw null;
        }
        if ((i11 & 1533916891) != 306783378) {
            throw null;
        }
        throw null;
    }

    private static final void Rive$SingleChildLayout(f modifier, Function2<? super c, ? super Integer, Unit> function2, c cVar, int i5, int i6) {
        cVar.d();
        if ((i6 & 1) != 0) {
            modifier = z.c.a;
        }
        RiveKt$Rive$SingleChildLayout$1 riveKt$Rive$SingleChildLayout$1 = new n() { // from class: app.rive.RiveKt$Rive$SingleChildLayout$1
            @Override // g0.n
            public int maxIntrinsicHeight(@NotNull g gVar, @NotNull List measurables, int i10) {
                Intrinsics.checkNotNullParameter(gVar, "<this>");
                Intrinsics.checkNotNullParameter(measurables, "measurables");
                ArrayList arrayList = new ArrayList(measurables.size());
                int size = measurables.size();
                for (int i11 = 0; i11 < size; i11++) {
                    arrayList.add(new d((m) measurables.get(i11), h.f9074e, i.f9077e));
                }
                return ((p) mo43measure3p2s80s(new j(gVar, gVar.getLayoutDirection()), arrayList, q.c(i10, 0, 13))).f6252b;
            }

            @Override // g0.n
            public int maxIntrinsicWidth(@NotNull g gVar, @NotNull List measurables, int i10) {
                Intrinsics.checkNotNullParameter(gVar, "<this>");
                Intrinsics.checkNotNullParameter(measurables, "measurables");
                ArrayList arrayList = new ArrayList(measurables.size());
                int size = measurables.size();
                for (int i11 = 0; i11 < size; i11++) {
                    arrayList.add(new d((m) measurables.get(i11), h.f9074e, i.f9076d));
                }
                return ((p) mo43measure3p2s80s(new j(gVar, gVar.getLayoutDirection()), arrayList, q.c(0, i10, 7))).a;
            }

            @Override // g0.n
            @NotNull
            /* renamed from: measure-3p2s80s, reason: not valid java name */
            public final o mo43measure3p2s80s(@NotNull g0.p Layout, @NotNull List<? extends m> measurables, long j) {
                Intrinsics.checkNotNullParameter(Layout, "$this$Layout");
                Intrinsics.checkNotNullParameter(measurables, "measurables");
                final t g6 = ((m) CollectionsKt.Z(measurables)).g(j);
                int i10 = g6.f9081d;
                int i11 = g6.f9082e;
                Function1<s, Unit> placementBlock = new Function1<s, Unit>() { // from class: app.rive.RiveKt$Rive$SingleChildLayout$1.1
                    {
                        super(1);
                    }

                    @Override // kotlin.jvm.functions.Function1
                    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                        invoke((s) obj);
                        return Unit.a;
                    }

                    public final void invoke(@NotNull s layout) {
                        Intrinsics.checkNotNullParameter(layout, "$this$layout");
                        t tVar = t.this;
                        layout.getClass();
                        s.a(tVar, 0, 0);
                    }
                };
                n0 alignmentLines = v0.d();
                Layout.getClass();
                Intrinsics.checkNotNullParameter(alignmentLines, "alignmentLines");
                Intrinsics.checkNotNullParameter(placementBlock, "placementBlock");
                p pVar = new p();
                pVar.f6254d = Layout;
                pVar.f6255e = placementBlock;
                pVar.a = i10;
                pVar.f6252b = i11;
                pVar.f6253c = alignmentLines;
                return pVar;
            }

            @Override // g0.n
            public int minIntrinsicHeight(@NotNull g gVar, @NotNull List measurables, int i10) {
                Intrinsics.checkNotNullParameter(gVar, "<this>");
                Intrinsics.checkNotNullParameter(measurables, "measurables");
                ArrayList arrayList = new ArrayList(measurables.size());
                int size = measurables.size();
                for (int i11 = 0; i11 < size; i11++) {
                    arrayList.add(new d((m) measurables.get(i11), h.f9073d, i.f9077e));
                }
                return ((p) mo43measure3p2s80s(new j(gVar, gVar.getLayoutDirection()), arrayList, q.c(i10, 0, 13))).f6252b;
            }

            @Override // g0.n
            public int minIntrinsicWidth(@NotNull g gVar, @NotNull List measurables, int i10) {
                Intrinsics.checkNotNullParameter(gVar, "<this>");
                Intrinsics.checkNotNullParameter(measurables, "measurables");
                ArrayList arrayList = new ArrayList(measurables.size());
                int size = measurables.size();
                for (int i11 = 0; i11 < size; i11++) {
                    arrayList.add(new d((m) measurables.get(i11), h.f9073d, i.f9076d));
                }
                return ((p) mo43measure3p2s80s(new j(gVar, gVar.getLayoutDirection()), arrayList, q.c(0, i10, 7))).a;
            }
        };
        cVar.i();
        cVar.l();
        cVar.h();
        i0.i.a.getClass();
        i0.h hVar = i0.h.a;
        Intrinsics.checkNotNullParameter(modifier, "modifier");
        new l(3);
        cVar.e();
        throw new IllegalStateException("Invalid applier");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean Rive$lambda$1(u.l lVar) {
        return ((Boolean) lVar.getValue()).booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int Rive$lambda$10(k kVar) {
        u.t tVar = (u.t) kVar;
        tVar.getClass();
        ((u.s) y.f.f(null, tVar)).getClass();
        return 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void Rive$lambda$11(k kVar, int i5) {
        ((u.t) kVar).i(i5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Function1<Function0<Bitmap>, Unit> Rive$lambda$13(x xVar) {
        return (Function1) xVar.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean Rive$lambda$15(u.l lVar) {
        return ((Boolean) lVar.getValue()).booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void Rive$lambda$16(u.l lVar, boolean z5) {
        lVar.setValue(Boolean.valueOf(z5));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void Rive$lambda$2(u.l lVar, boolean z5) {
        lVar.setValue(Boolean.valueOf(z5));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final RiveSurface Rive$lambda$4(u.l lVar) {
        return (RiveSurface) lVar.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int Rive$lambda$7(k kVar) {
        u.t tVar = (u.t) kVar;
        tVar.getClass();
        ((u.s) y.f.f(null, tVar)).getClass();
        return 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void Rive$lambda$8(k kVar, int i5) {
        ((u.t) kVar).i(i5);
    }
}
