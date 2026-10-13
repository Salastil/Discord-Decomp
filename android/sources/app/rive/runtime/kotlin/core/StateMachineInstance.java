package app.rive.runtime.kotlin.core;

import app.rive.runtime.kotlin.core.ViewModelInstance;
import app.rive.runtime.kotlin.core.errors.RiveEventException;
import app.rive.runtime.kotlin.core.errors.StateMachineInputException;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.d0;
import kotlin.collections.r0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import org.jetbrains.annotations.NotNull;
import s4.h;
import yo.j;

@Metadata(d1 = {"\u0000v\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0007\n\u0002\b\b\n\u0002\u0010\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u00012\u00020\u0002B\u0015\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\u000e\u0010*\u001a\u00020+2\u0006\u0010,\u001a\u00020-J\u0010\u0010.\u001a\u00020\u00152\u0006\u0010/\u001a\u00020\u0015H\u0002J\u0010\u00100\u001a\u00020!2\u0006\u00101\u001a\u00020!H\u0002J\u0019\u00102\u001a\u00020+2\u0006\u00103\u001a\u00020\u00042\u0006\u00104\u001a\u00020-H\u0082 J\u0011\u00105\u001a\u0002062\u0006\u00103\u001a\u00020\u0004H\u0096 J\u0011\u00107\u001a\u00020\u000e2\u0006\u00108\u001a\u00020\u0004H\u0082 J\u0011\u00109\u001a\u00020\u000e2\u0006\u00108\u001a\u00020\u0004H\u0082 J\u0011\u0010:\u001a\u00020\u00122\u0006\u00108\u001a\u00020\u0004H\u0082 J)\u0010;\u001a\u0002062\u0006\u00108\u001a\u00020\u00042\u0006\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020-2\u0006\u0010>\u001a\u00020-H\u0082 J)\u0010?\u001a\u0002062\u0006\u00108\u001a\u00020\u00042\u0006\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020-2\u0006\u0010>\u001a\u00020-H\u0082 J)\u0010@\u001a\u0002062\u0006\u00108\u001a\u00020\u00042\u0006\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020-2\u0006\u0010>\u001a\u00020-H\u0082 J)\u0010A\u001a\u0002062\u0006\u00108\u001a\u00020\u00042\u0006\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020-2\u0006\u0010>\u001a\u00020-H\u0082 J\u0019\u0010B\u001a\u00020C2\u0006\u00108\u001a\u00020\u00042\u0006\u0010D\u001a\u00020\u000eH\u0082 J\u0011\u0010E\u001a\u00020\u000e2\u0006\u00108\u001a\u00020\u0004H\u0082 J\u0019\u0010F\u001a\u00020\u00042\u0006\u00108\u001a\u00020\u00042\u0006\u0010D\u001a\u00020\u000eH\u0082 J\u0019\u0010G\u001a\u0002062\u0006\u00108\u001a\u00020\u00042\u0006\u0010H\u001a\u00020\u0004H\u0082 J\u0019\u0010I\u001a\u00020\u00042\u0006\u00108\u001a\u00020\u00042\u0006\u0010D\u001a\u00020\u000eH\u0082 J\u0011\u0010J\u001a\u00020\u000e2\u0006\u00108\u001a\u00020\u0004H\u0082 J\u000e\u0010K\u001a\u00020\n2\u0006\u0010D\u001a\u00020\u000eJ\u000e\u0010/\u001a\u00020\u00152\u0006\u0010D\u001a\u00020\u000eJ\u000e\u0010/\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u0012J\u001e\u0010L\u001a\u0002062\u0006\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020-2\u0006\u0010>\u001a\u00020-J\u001e\u0010M\u001a\u0002062\u0006\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020-2\u0006\u0010>\u001a\u00020-J\u001e\u0010N\u001a\u0002062\u0006\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020-2\u0006\u0010>\u001a\u00020-J\u001e\u0010O\u001a\u0002062\u0006\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020-2\u0006\u0010>\u001a\u00020-J\u000e\u0010P\u001a\u00020$2\u0006\u0010Q\u001a\u00020RJ\u000e\u0010S\u001a\u00020!2\u0006\u0010D\u001a\u00020\u000eR\u0017\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t8F¢\u0006\u0006\u001a\u0004\b\u000b\u0010\fR\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\r\u001a\u00020\u000e8F¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R\u0017\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00120\t8F¢\u0006\u0006\u001a\u0004\b\u0013\u0010\fR\u0017\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00150\t8F¢\u0006\u0006\u001a\u0004\b\u0016\u0010\fR\u0011\u0010\u0017\u001a\u00020\u000e8F¢\u0006\u0006\u001a\u0004\b\u0018\u0010\u0010R\u0014\u0010\u0019\u001a\u00020\u00128VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u001a\u0010\u001bR\u0014\u0010\u001c\u001a\u00020\u000e8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u001d\u0010\u0010R\u0014\u0010\u001e\u001a\u00020\u000e8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u001f\u0010\u0010R\u0017\u0010 \u001a\b\u0012\u0004\u0012\u00020!0\t8F¢\u0006\u0006\u001a\u0004\b\"\u0010\fR(\u0010%\u001a\u0004\u0018\u00010$2\b\u0010#\u001a\u0004\u0018\u00010$@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b&\u0010'\"\u0004\b(\u0010)¨\u0006T"}, d2 = {"Lapp/rive/runtime/kotlin/core/StateMachineInstance;", "Lapp/rive/runtime/kotlin/core/PlayableInstance;", "Lapp/rive/runtime/kotlin/core/NativeObject;", "unsafeCppPointer", "", "fileLock", "Ljava/util/concurrent/locks/ReentrantLock;", "(JLjava/util/concurrent/locks/ReentrantLock;)V", "eventsReported", "", "Lapp/rive/runtime/kotlin/core/RiveEvent;", "getEventsReported", "()Ljava/util/List;", "inputCount", "", "getInputCount", "()I", "inputNames", "", "getInputNames", "inputs", "Lapp/rive/runtime/kotlin/core/SMIInput;", "getInputs", "layerCount", "getLayerCount", StackTraceHelper.NAME_KEY, "getName", "()Ljava/lang/String;", "reportedEventCount", "getReportedEventCount", "stateChangedCount", "getStateChangedCount", "statesChanged", "Lapp/rive/runtime/kotlin/core/LayerState;", "getStatesChanged", "value", "Lapp/rive/runtime/kotlin/core/ViewModelInstance;", "viewModelInstance", "getViewModelInstance", "()Lapp/rive/runtime/kotlin/core/ViewModelInstance;", "setViewModelInstance", "(Lapp/rive/runtime/kotlin/core/ViewModelInstance;)V", "advance", "", "elapsed", "", "convertInput", "input", "convertLayerState", "state", "cppAdvance", "pointer", "elapsedTime", "cppDelete", "", "cppInputCount", "cppPointer", "cppLayerCount", "cppName", "cppPointerDown", "pointerID", "x", "y", "cppPointerExit", "cppPointerMove", "cppPointerUp", "cppReportedEventAt", "Lapp/rive/runtime/kotlin/core/RiveEventReport;", "index", "cppReportedEventCount", "cppSMIInputByIndex", "cppSetViewModelInstance", "viewModel", "cppStateChangedByIndex", "cppStateChangedCount", "eventAt", "pointerDown", "pointerExit", "pointerMove", "pointerUp", "receiveViewModelInstance", "transfer", "Lapp/rive/runtime/kotlin/core/ViewModelInstance$Transfer;", "stateChanged", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nStateMachineInstance.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StateMachineInstance.kt\napp/rive/runtime/kotlin/core/StateMachineInstance\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,206:1\n1#2:207\n1557#3:208\n1628#3,3:209\n1557#3:212\n1628#3,3:213\n1557#3:216\n1628#3,3:217\n1557#3:220\n1628#3,3:221\n*S KotlinDebug\n*F\n+ 1 StateMachineInstance.kt\napp/rive/runtime/kotlin/core/StateMachineInstance\n*L\n151#1:208\n151#1:209,3\n155#1:212\n155#1:213,3\n200#1:216\n200#1:217,3\n204#1:220\n204#1:221,3\n*E\n"})
/* loaded from: classes.dex */
public final class StateMachineInstance extends NativeObject implements PlayableInstance {
    public static final int $stable = 8;

    @NotNull
    private final ReentrantLock fileLock;
    private ViewModelInstance viewModelInstance;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public StateMachineInstance(long j, @NotNull ReentrantLock fileLock) {
        super(j);
        Intrinsics.checkNotNullParameter(fileLock, "fileLock");
        this.fileLock = fileLock;
    }

    private final SMIInput convertInput(SMIInput input) {
        if (input.isBoolean()) {
            return new SMIBoolean(input.getCppPointer());
        }
        if (input.isTrigger()) {
            return new SMITrigger(input.getCppPointer());
        }
        if (input.isNumber()) {
            return new SMINumber(input.getCppPointer());
        }
        throw new StateMachineInputException(h.f("Unknown State Machine Input Instance for ", input.getName(), "."));
    }

    private final LayerState convertLayerState(LayerState state) {
        if (state.isAnimationState()) {
            return new AnimationState(state.getCppPointer());
        }
        if (state.isAnyState()) {
            return new AnyState(state.getCppPointer());
        }
        if (state.isEntryState()) {
            return new EntryState(state.getCppPointer());
        }
        if (state.isExitState()) {
            return new ExitState(state.getCppPointer());
        }
        if (state.isBlendState()) {
            return new BlendState(state.getCppPointer());
        }
        throw new StateMachineInputException("Unknown Layer State for " + state + ".");
    }

    private final native boolean cppAdvance(long pointer, float elapsedTime);

    private final native int cppInputCount(long cppPointer);

    private final native int cppLayerCount(long cppPointer);

    private final native String cppName(long cppPointer);

    private final native void cppPointerDown(long cppPointer, int pointerID, float x5, float y5);

    private final native void cppPointerExit(long cppPointer, int pointerID, float x5, float y5);

    private final native void cppPointerMove(long cppPointer, int pointerID, float x5, float y5);

    private final native void cppPointerUp(long cppPointer, int pointerID, float x5, float y5);

    private final native RiveEventReport cppReportedEventAt(long cppPointer, int index);

    private final native int cppReportedEventCount(long cppPointer);

    private final native long cppSMIInputByIndex(long cppPointer, int index);

    private final native void cppSetViewModelInstance(long cppPointer, long viewModel);

    private final native long cppStateChangedByIndex(long cppPointer, int index);

    private final native int cppStateChangedCount(long cppPointer);

    private final int getReportedEventCount() {
        return cppReportedEventCount(getCppPointer());
    }

    private final int getStateChangedCount() {
        return cppStateChangedCount(getCppPointer());
    }

    public final boolean advance(float elapsed) {
        boolean cppAdvance;
        synchronized (this.fileLock) {
            cppAdvance = cppAdvance(getCppPointer(), elapsed);
        }
        return cppAdvance;
    }

    @Override // app.rive.runtime.kotlin.core.NativeObject
    public native void cppDelete(long pointer);

    @NotNull
    public final RiveEvent eventAt(int index) {
        RiveEventReport cppReportedEventAt = cppReportedEventAt(getCppPointer(), index);
        if (cppReportedEventAt.getUnsafeCppPointer() != 0) {
            return cppReportedEventAt.getEvent();
        }
        throw new RiveEventException(h.e(index, "No Rive Event found at index ", "."));
    }

    @NotNull
    public final List<RiveEvent> getEventsReported() {
        IntRange i5 = j.i(0, getReportedEventCount());
        ArrayList arrayList = new ArrayList(d0.l(i5, 10));
        Iterator it = i5.iterator();
        while (it.hasNext()) {
            arrayList.add(eventAt(((r0) it).nextInt()));
        }
        return arrayList;
    }

    public final int getInputCount() {
        return cppInputCount(getCppPointer());
    }

    @NotNull
    public final List<String> getInputNames() {
        IntRange i5 = j.i(0, getInputCount());
        ArrayList arrayList = new ArrayList(d0.l(i5, 10));
        Iterator it = i5.iterator();
        while (it.hasNext()) {
            arrayList.add(input(((r0) it).nextInt()).getName());
        }
        return arrayList;
    }

    @NotNull
    public final List<SMIInput> getInputs() {
        IntRange i5 = j.i(0, getInputCount());
        ArrayList arrayList = new ArrayList(d0.l(i5, 10));
        Iterator it = i5.iterator();
        while (it.hasNext()) {
            arrayList.add(input(((r0) it).nextInt()));
        }
        return arrayList;
    }

    public final int getLayerCount() {
        return cppLayerCount(getCppPointer());
    }

    @Override // app.rive.runtime.kotlin.core.PlayableInstance
    @NotNull
    public String getName() {
        return cppName(getCppPointer());
    }

    @NotNull
    public final List<LayerState> getStatesChanged() {
        IntRange i5 = j.i(0, getStateChangedCount());
        ArrayList arrayList = new ArrayList(d0.l(i5, 10));
        Iterator it = i5.iterator();
        while (it.hasNext()) {
            arrayList.add(stateChanged(((r0) it).nextInt()));
        }
        return arrayList;
    }

    public final ViewModelInstance getViewModelInstance() {
        return this.viewModelInstance;
    }

    @NotNull
    public final SMIInput input(int index) {
        long cppSMIInputByIndex = cppSMIInputByIndex(getCppPointer(), index);
        if (cppSMIInputByIndex != 0) {
            return convertInput(new SMIInput(cppSMIInputByIndex));
        }
        throw new StateMachineInputException(h.e(index, "No StateMachineInput found at index ", "."));
    }

    public final void pointerDown(int pointerID, float x5, float y5) {
        synchronized (this.fileLock) {
            cppPointerDown(getCppPointer(), pointerID, x5, y5);
            Unit unit = Unit.a;
        }
    }

    public final void pointerExit(int pointerID, float x5, float y5) {
        synchronized (this.fileLock) {
            cppPointerExit(getCppPointer(), pointerID, x5, y5);
            Unit unit = Unit.a;
        }
    }

    public final void pointerMove(int pointerID, float x5, float y5) {
        synchronized (this.fileLock) {
            cppPointerMove(getCppPointer(), pointerID, x5, y5);
            Unit unit = Unit.a;
        }
    }

    public final void pointerUp(int pointerID, float x5, float y5) {
        synchronized (this.fileLock) {
            cppPointerUp(getCppPointer(), pointerID, x5, y5);
            Unit unit = Unit.a;
        }
    }

    @NotNull
    public final ViewModelInstance receiveViewModelInstance(@NotNull ViewModelInstance.Transfer transfer) {
        Intrinsics.checkNotNullParameter(transfer, "transfer");
        ViewModelInstance end$kotlin_release = transfer.end$kotlin_release();
        getDependencies().add(end$kotlin_release);
        setViewModelInstance(end$kotlin_release);
        return end$kotlin_release;
    }

    public final void setViewModelInstance(ViewModelInstance viewModelInstance) {
        if (viewModelInstance != null) {
            viewModelInstance.updateFileLock$kotlin_release(this.fileLock);
        }
        synchronized (this.fileLock) {
            if (viewModelInstance != null) {
                try {
                    cppSetViewModelInstance(getCppPointer(), viewModelInstance.getCppPointer());
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            this.viewModelInstance = viewModelInstance;
            Unit unit = Unit.a;
        }
    }

    @NotNull
    public final LayerState stateChanged(int index) {
        long cppStateChangedByIndex = cppStateChangedByIndex(getCppPointer(), index);
        if (cppStateChangedByIndex != 0) {
            return convertLayerState(new LayerState(cppStateChangedByIndex));
        }
        throw new StateMachineInputException(h.e(index, "No LayerState found at index ", "."));
    }

    @NotNull
    public final SMIInput input(@NotNull String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        int inputCount = getInputCount();
        for (int i5 = 0; i5 < inputCount; i5++) {
            SMIInput input = input(i5);
            if (Intrinsics.areEqual(input.getName(), name)) {
                return input;
            }
        }
        throw new StateMachineInputException(h.f("No StateMachineInput found with name ", name, "."));
    }
}
